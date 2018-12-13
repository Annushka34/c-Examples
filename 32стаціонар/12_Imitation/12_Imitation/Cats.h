#pragma once
#include"Header.h"
#include"Mammals.h"
class Cats : public Mammals
{
public:
	Cats(string name): Mammals(name)
	{
	}
	void Show()
	{
		SetColor(14);
		cout << "cats: (derived 2)" << name << endl;
		SetColor(7);
	}
};