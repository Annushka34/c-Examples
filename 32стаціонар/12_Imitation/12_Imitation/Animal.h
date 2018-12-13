#pragma once
#include"Header.h"


class Animal
{
protected:
	string name;
public:
	Animal(string name):name(name)
	{
		/*this->name = name;*/
	}
	virtual void Show()
	{
		SetColor(10);
		cout <<"Base animal: "<< name << endl;
		SetColor(7);
	}
};