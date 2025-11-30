#ifndef DICE_H
#define DICE_H
class Dice
{
	public:

		Dice();

		void setDiceFaces(int x);
		int getDiceFaces();
		int rollDice(int salt);
};
#endif
