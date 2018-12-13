#pragma once
#include"Header.h"
#include"Person.h"

class Child : public Person
{
private:
	string toyName;
public:
	void SetToy(string toy);
	void Show();
};
