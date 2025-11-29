#ifndef BAG_H
#define BAG_H

#include "dice.h"

class Bag
{
	public: 
		Dice GetRandomDice();
		void AddDiceToBag(Dice dice);
};
#endif
