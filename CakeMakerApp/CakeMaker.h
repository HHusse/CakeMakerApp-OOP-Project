#pragma once
#include<iostream>
#include<string>
#include<windows.h>
#include"RecipeCake.h"
#include"Cake.h"

using namespace std;

class CakeMaker
{
public:
	CakeMaker() {};
	
	Cake takeCommand(RecipeCake recipe);

};