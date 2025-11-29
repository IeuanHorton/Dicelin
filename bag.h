#ifndef BAG_H
#define BAG_H

#include "dice.h"

class Bag
{
	public: 
		Dice getRandomDice();
		void addDiceToBag(Dice dice);
		int getDiceBagSize();

	private:
		void makeNewDiceBagUp(Dice oldDiceBag[]);
};
#endif
