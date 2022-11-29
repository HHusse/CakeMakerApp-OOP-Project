#pragma once
#include <iostream>
#include<string>
#include<list>

using namespace std;

class RecipeCake
{
private:
	string name;
	int time;
	RecipeCake *head, *next;
public:
	RecipeCake() {};
	RecipeCake(string name, int time);
	string getName();
	int getTime();
	void addRecipe();
	int searchRecipe(string name);
	void showMenu();
	
};
