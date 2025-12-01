//░███████   ░██                      ░██ ░██           
//░██   ░██                           ░██               
//░██    ░██ ░██ ░███████   ░███████  ░██ ░██░███████  
//░██    ░██ ░██░██    ░██ ░██    ░██ ░██ ░██░██    ░██ 
//░██    ░██ ░██░██        ░█████████ ░██ ░██░██    ░██ 
//░██   ░██  ░██░██    ░██ ░██        ░██ ░██░██    ░██ 
//░███████   ░██ ░███████   ░███████  ░██ ░██░██    ░██ 

#include "game.h"
#include "dice.h"
#include "bag.h"
#include "terminalDisplay.h"
#include <iostream>

using namespace std;

Bag bag;
Dice dice, aiDice;
int score, upgradesUsed, currentRound;

int main(int argc, char* argv[])
{
	bool playing = true;
	string input;

	displayTitle();
	displayInstuctions();
	init(); 
	while(playing)
	{
		displayRound(currentRound);
		displayQuestion();
		cin >> input;

		if(!input.compare("u") || !input.compare("U"))
		{
			if(score < upgradesUsed * 2)
			{
				displayShopFail(upgradesUsed * 2, score);
			}
			else
			{
				dice.setDiceFaces(dice.getDiceFaces() * 2);
				displayShopSuccess(dice.getDiceFaces());
			}
		}
		else if(!input.compare("r") || !input.compare("R"))
		{
			int playerRoll, aiRoll;
			currentRound++;
			playerRoll = dice.rollDice();
			aiRoll = aiDice.rollDice();

			displayPlayerRoll(playerRoll);
			displayAiRoll(aiRoll);

			if(playerRoll < aiRoll)
			{
				displayFailure();
			}
			else if(playerRoll == aiRoll)
			{
				displayTie();
			}
			else
			{
				displaySuccess();
				aiDice.setDiceFaces(currentRound);
				score = score + playerRoll - aiRoll;
				displayAIWarning();
			}
			displayScore(score);
			aiDice.setDiceFaces(currentRound + 1);

			std::cout << "PLAYER DICEFACES: " << dice.getDiceFaces() << " | AI DICEFACES: " << aiDice.getDiceFaces() << std::endl;
		}
		else if(!input.compare("q") || !input.compare("Q"))
		{
			playing = false;
		}
		else
		{
			displayCommandFailure();
		}
	}
}

void init()
{
	dice.setDiceFaces(6);
	aiDice.setDiceFaces(1);
	score = 0;
	upgradesUsed = 0;
	currentRound = 0;
}
