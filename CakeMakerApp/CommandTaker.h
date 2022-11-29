#pragma once
#include <iostream>
#include <string>
#include"CakeMaker.h"
#include"CarouselOfCakes.h"
#include"RecipeCake.h"

using namespace std;

class CommandTaker
{
private:
	RecipeCake carouselRecipe;
	CakeMaker cakeMaker;
	CarouselOfCakes carousel;
public:
	CommandTaker() {};
	Cake takeCommand(RecipeCake recipe);
	void takeCommandMultiple(RecipeCake recipe, int nrOfCakes);
	void getCakesFromCarousel();
	void firstFill();
private:
	bool checkCarouselOfCakes();
	void refillCarousel();
	

};
