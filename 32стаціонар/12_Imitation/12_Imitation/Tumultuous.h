#pragma once //---безхвостые
#include"Header.h"
#include "Amphibia.h"

class Tumultuous : public Amphibia
{
public:

	Tumultuous(string name): Amphibia(name)
	{
	}
	void Show()
	{
		SetColor(16);
		cout << "Tumultuous (Derived 2)" << name << endl;
		SetColor(7);
	}
};
