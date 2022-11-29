#include "CommandPanel.h"

CommandPanel::CommandPanel() 
{ 
	menu->addRecipe(); 
	commandTaker.firstFill();
};

void CommandPanel::showProducts()
{
	
	menu->showMenu();
}
void CommandPanel::selectProduct(string name)
{
	int time;
	time=menu->searchRecipe(name);
	RecipeCake recipe(name, time);
	if (time > 0)
	{
		commandTaker.takeCommand(recipe);
		cout << endl << "Pofiti " << name << "ul." << endl;
	}
	else
		cout << endl << "Nu servim produsul dorit de dumneavoasta!" << endl;
}

void CommandPanel::selectProductMultiple(string name, int numberofnrOfProducts)
{
	
	int time;
	time=menu->searchRecipe(name);
	RecipeCake recipe(name, time);
	if (time > 0)
	{
		commandTaker.takeCommandMultiple(recipe, numberofnrOfProducts);
		cout << endl <<"Poftiti cele " << numberofnrOfProducts << " " << name << "uri." << endl;
	}
	else
		cout << endl << "Nu servim produsul dorit de dumneavoasta!"<<endl;
}

void CommandPanel::showProductsInCarousel()
{
	cout << "-Acestea sunt prajiturile pe care le avem in momentul de fata pe stoc-" << endl << endl;
	commandTaker.getCakesFromCarousel();
}