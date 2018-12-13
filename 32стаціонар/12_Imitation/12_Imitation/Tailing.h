#pragma once//---хвостатые
#include"Header.h"
#include"Amphibia.h"

class Tailing : public Amphibia
{
public:
	Tailing(string name): Amphibia(name)
	{
	
	}
	void Show()
	{
		SetColor(15);
		cout << "Tailing (derived 2)" << name << endl;
		SetColor(7);
	}
};
