#include "bag.h"
#include "dice.h"
#include <cstdlib>
#include <ctime>

Dice dicebag[5];//set to 5 for now. will change later

Dice Bag::GetRandomDice()
{
	srand(static_cast<unsigned int>(time(0)));
	return dicebag[std::rand()];
}

void Bag::AddDiceToBag(Dice dice)
{
	dicebag[0] = dice;

}

