#include "CakeMaker.h"

Cake CakeMaker::takeCommand(RecipeCake recipe)
{
	int ms = 1000;
	cout << endl << "Va rugam asteptati " << recipe.getTime() << " secunde pana este gata prajitura" << endl;
	Sleep(recipe.getTime()*ms);
	Cake C;
	C = Cake(recipe.getName());
	return C;
}