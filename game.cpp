#include "dice.h"
#include "bag.h"
#include <iostream>

Bag bag;

int main(int argc, char* argv[])
{
	//testcode
	Dice dice;
	dice.setDiceFaces(10);
	int number = dice.rollDice();
	std::cout << number;
	//testcode
}

void init()
{
}
