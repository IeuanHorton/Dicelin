#include "bag.h"
#include "dice.h"
#include <std>

class Bag
{

	Dice[] dicebag;

	Dice getRandomDice()
	{
		std::srand(std::time({}));//uses current time as seed for random gen
		return dicebag[std::rand()];
	}

}
