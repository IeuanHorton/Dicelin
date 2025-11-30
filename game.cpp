//░███████   ░██                      ░██ ░██           
//░██   ░██                           ░██               
//░██    ░██ ░██ ░███████   ░███████  ░██ ░██░███████  
//░██    ░██ ░██░██    ░██ ░██    ░██ ░██ ░██░██    ░██ 
//░██    ░██ ░██░██        ░█████████ ░██ ░██░██    ░██ 
//░██   ░██  ░██░██    ░██ ░██        ░██ ░██░██    ░██ 
//░███████   ░██ ░███████   ░███████  ░██ ░██░██    ░██ 

#include "dice.h"
#include "bag.h"
#include "terminalDisplay.h"
#include <iostream>

Bag bag;

int main(int argc, char* argv[])
{
	displayTitle();

	Dice dice;
	dice.setDiceFaces(6);
	bag.addDiceToBag(dice);
	Dice newDice = bag.getRandomDice();
	int number = newDice.rollDice();
	std::cout << number << std::endl;
}

void init()
{
}
