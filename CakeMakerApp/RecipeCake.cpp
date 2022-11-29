#include "RecipeCake.h"

RecipeCake::RecipeCake(string name, int time)
{
	head = NULL;
	this->name = name;
	this->time = time;
};

string RecipeCake::getName()
{
	return name;
}

int RecipeCake::getTime()
{
	return time;
}

void RecipeCake::addRecipe()
{
	RecipeCake *recipe=new RecipeCake("eclere",5);
	recipe->next = head;
	head = recipe;
	recipe = new RecipeCake("tort", 6);
	recipe->next = head;
	head = recipe;
	recipe = new RecipeCake("pancakes", 3);
	recipe->next = head;
	head = recipe;
	recipe = new RecipeCake("cupcakes", 2);
	recipe->next = head;
	head = recipe;

}

int RecipeCake::searchRecipe(string name)
{
	RecipeCake *recipe = head;
	while (recipe)
	{
		if (recipe->getName() == name)
		{
			int time;
			time = recipe->getTime();
			return time;
			
		}
		recipe = recipe->next;
	}
	return 0;
}
void RecipeCake::showMenu()
{
	cout << "\t-Meniul-" << endl << endl;
	RecipeCake *recipe = head;
	int cont = 1;
	while (recipe)
	{
		cout << cont << ". " << recipe->name << endl;
		cont++;
		recipe = recipe->next;
	}
}