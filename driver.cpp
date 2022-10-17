#include "banana.h"

int main(){
	Seed bananaSeed(1, "round");
	Banana newBanana("yellow", 12, bananaSeed, true);

	newBanana.printBanana();
	newBanana.printFruit();
	bananaSeed.printSeed();
	cout << endl << endl;
	newBanana.setPeel(false);
	newBanana.printBanana();
	newBanana.printFruit();
	bananaSeed.printSeed();

	return 0;
}