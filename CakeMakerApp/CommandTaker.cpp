#include"CommandTaker.h"

Cake CommandTaker::takeCommand(RecipeCake recipe)
{
	
	Cake cake;
	string nameOfCake = recipe.getName();
	if (carousel.getCurrentCapacity() <= 3)
		refillCarousel();
	cake = carousel.getCake(nameOfCake);
	if (cake.getName() == nameOfCake)
	{
		
		return cake;
	}
	else
	{
		Cake cake2;
		cake2 = cakeMaker.takeCommand(recipe);
		return cake2;
	}
}

void CommandTaker::takeCommandMultiple(RecipeCake recipe, int nrOfCakes)
{
	while (nrOfCakes != 0)
	{
		cakeMaker.takeCommand(recipe);
		nrOfCakes--;
	}

}

void CommandTaker::getCakesFromCarousel()
{
	carousel.showCarousel();
}

bool CommandTaker::checkCarouselOfCakes()
{
	if (carousel.getCurrentCapacity() > 3)
		return true;
	else
		return false;
}

void CommandTaker::refillCarousel()
{
	Cake cake;
	if (checkCarouselOfCakes() == false)
	{
		
		carousel.addCake(Cake("eclere"));
		carousel.addCake(Cake("eclere"));
		carousel.addCake(Cake("tort"));
		carousel.addCake(Cake("tort"));
		carousel.addCake(Cake("pancakes"));
		carousel.addCake(Cake("pancakes"));
		carousel.addCake(Cake("cupcakes"));
		carousel.addCake(Cake("cupcakes"));
		carousel.addCake(Cake("cupcakes"));
		
	}
}
void CommandTaker::firstFill()
{
	carousel.addCake(Cake("eclere"));
	carousel.addCake(Cake("eclere"));
	carousel.addCake(Cake("eclere"));
	carousel.addCake(Cake("tort"));
	carousel.addCake(Cake("tort"));
	carousel.addCake(Cake("tort"));
	carousel.addCake(Cake("pancakes"));
	carousel.addCake(Cake("pancakes"));
	carousel.addCake(Cake("pancakes"));
	carousel.addCake(Cake("cupcakes"));
	carousel.addCake(Cake("cupcakes"));
	carousel.addCake(Cake("cupcakes"));
}