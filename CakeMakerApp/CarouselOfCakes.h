#pragma once
#include <iostream>
#include <string>
#include "Cake.h"

using namespace std;

class CarouselOfCakes
{
private:
	Cake c[13];
	unsigned int maxcap = 12;
	unsigned int lowcap = 3;
	unsigned int curentcap=0;

public:
	CarouselOfCakes() {};
	int getCurrentCapacity();
	void addCake(Cake cake);
	Cake getCake(string name);
	void showCarousel();


};
