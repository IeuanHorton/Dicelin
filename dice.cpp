#include "dice.h"
#include <cstdlib>
#include <ctime>

int diceFaces;

void Dice::setDiceFaces(int x)
{
	diceFaces = x;
}

int Dice::getDiceFaces()
{
	return diceFaces;
}

int Dice::rollDice()
{
	srand(static_cast<unsigned int>(time(0)));
	return ((rand() % diceFaces)+1);
}

Dice::Dice()
{
	diceFaces = 6;
}
