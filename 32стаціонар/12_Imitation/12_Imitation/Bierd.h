#pragma once
#include"Header.h"
#include"Mammals.h"
class Bierd : public Mammals
{
public:

	Bierd(string name): Mammals(name)
	{
	}
	void Show()
	{
		SetColor(11);
		cout << "Bierd (derived 2)" << name << endl;
		SetColor(7);
	}
};