#include"CarouselOfCakes.h"


void CarouselOfCakes::addCake(Cake cake)
{
	int a;
	if (curentcap <= maxcap)
	{
		a = curentcap;
		c[a + 1] = cake;
		curentcap++;
	}
	
}

Cake CarouselOfCakes::getCake(string name)
{
	Cake cake;
	for (int i = 1; i <= curentcap; i++)
	{
		
		if (c[i].getName() == name)
		{
			cake = c[i];
			for (int j = i; j < (curentcap - 1); j++)
				c[j] = c[j + 1];
			curentcap--;
			return cake;
		}
	}
	return Cake("false");

}

int CarouselOfCakes::getCurrentCapacity()
{
	
	return curentcap;

}

void CarouselOfCakes::showCarousel()
{
	for (int i = 1; i <= curentcap; i++)
	{
		cout << i << ". " << c[i].getName() << endl;
	}
}