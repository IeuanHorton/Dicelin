#include "bag.h"
#include "dice.h"
#include <cstdlib>
#include <ctime>

Dice* diceBag = new Dice[0];

Dice Bag::getRandomDice()
{
	srand(static_cast<unsigned int>(time(0)));
	return diceBag[std::rand()];
}

void Bag::addDiceToBag(Dice dice)
{
	makeNewDiceBagUp(diceBag);
	diceBag[getDiceBagSize()] = dice;
}

int Bag::getDiceBagSize()
{
	if(sizeof(diceBag) == 0)
	{
		return 0;
	}
	return (sizeof(diceBag) / sizeof(diceBag[0]));	
}

void Bag::makeNewDiceBagUp(Dice oldDiceBag[])
{
	int size = getDiceBagSize();
	free(diceBag);
	diceBag = new Dice[size + 1];

	for(int x = 0; x < size; x++)
	{
		diceBag[x] = oldDiceBag[x];
	}
}


