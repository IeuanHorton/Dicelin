#include <iostream>


void displayTitle()
{
	std::cout << "Welcome to														  " << std::endl;	
	std::cout << "░███████   ░██                      ░██ ░██ 			  " << std::endl;	 
	std::cout << "░██   ░██                           ░██               " << std::endl;
	std::cout << "░██    ░██ ░██ ░███████   ░███████  ░██ ░██░███████   " << std::endl; 
	std::cout << "░██    ░██ ░██░██    ░██ ░██    ░██ ░██ ░██░██    ░██ " << std::endl;
	std::cout << "░██    ░██ ░██░██        ░█████████ ░██ ░██░██    ░██ " << std::endl;
	std::cout << "░██   ░██  ░██░██    ░██ ░██        ░██ ░██░██    ░██ " << std::endl; 
	std::cout << "░███████   ░██ ░███████   ░███████  ░██ ░██░██    ░██ " << std::endl;
	std::cout << "                                          a dice game " << std::endl;
	std::cout << "                                                      " << std::endl;
}

void displayInstuctions()
{
	std::cout << "Here are your options:" << std::endl;
   std::cout << "'R' to roll your dice" << std::endl;
	std::cout << "'U' to update your dice" << std::endl;
	std::cout << "'Q' to quit the game" << std::endl;
}

void displayScore(int score)
{
	std::cout << "You currently have " << score << " score!" << std::endl;
}

void displayQuestion()
{
	std::cout << "What would you like to do?" << std::endl;	
}

void displayRound(int round)
{
	std::cout << "The current round is :" << round << std::endl; 
}

void displayShopFail(int scoreNeeded, int scoreHave)
{
	std::cout << "You do not have enough score to upgrade. " << scoreNeeded << " is needed. You have: " << scoreHave << std::endl; 
}

void displayShopSuccess(int diceface)
{
	std::cout << "You have successfully upgraded you die! You dice is now a D" << diceface << std::endl; 
}

void displayPlayerRoll(int roll)
{
	std::cout << "You rolled a:" << roll << std::endl; 
}

void displayAiRoll(int roll)
{
	std::cout << "Your opponent rolled a:" << roll << std::endl; 
}

void displayFailure()
{
	std::cout << "You did not win this round. You have lost score." << std::endl; 
}

void displayTie()
{
	std::cout << "You have tied with you opponent. No score awarded." << std::endl; 
}

void displaySuccess()
{
	std::cout << "You have won this round! Score awarded!" << std::endl; 
}

void displayAIWarning()
{
	std::cout << "Your opponent's die has gotten stronger." << std::endl; 
}

void displayCommandFailure()
{
	std::cout << "Invalid command. Please try again." << std::endl; 
}


//std::cout << "" << std::endl;

