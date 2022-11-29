#pragma once
#include <iostream>
#include<string>
#include"RecipeCake.h"
#include"CommandTaker.h"

using namespace std;

class CommandPanel
{
private:
	CommandTaker commandTaker;
	RecipeCake *menu = new RecipeCake("", 0);
public:
	CommandPanel();
	void showProducts();
	void selectProduct(string name);
	void selectProductMultiple(string name, int numberofnrOfProducts);
	void showProductsInCarousel();
};