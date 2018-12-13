#pragma once
#include"Header.h"
#include"Animal.h"

class Mammals : public Animal
{
public:
	Mammals(string name) :Animal(name)
	{

	}
	void Show()
	{
		SetColor(13);
		cout << "Mammals (derived 1)" << name << endl;
		SetColor(7);
	}
};