//░███████   ░██                      ░██ ░██           
//░██   ░██                           ░██               
//░██    ░██ ░██ ░███████   ░███████  ░██ ░██░███████  
//░██    ░██ ░██░██    ░██ ░██    ░██ ░██ ░██░██    ░██ 
//░██    ░██ ░██░██        ░█████████ ░██ ░██░██    ░██ 
//░██   ░██  ░██░██    ░██ ░██        ░██ ░██░██    ░██ 
//░███████   ░██ ░███████   ░███████  ░██ ░██░██    ░██ 

#include "dice.h"
#include "bag.h"
#include <iostream>

Bag bag;

int main(int argc, char* argv[])
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
