#pragma once
#include"Header.h"
#include"Animal.h"

class Amphibia : public Animal
{
public:
	Amphibia(string name):Animal(name)
	{
			
	}
	void Show( ) override //final // ---final - stoped virtual in derived classes
		//---override - explicit say that method have been virtual in parent class
	{
		SetColor(8);
		cout <<"Amphibia (derived 1)"<< name << endl;
		SetColor(7);
	}
};
