#pragma once
#include"Header.h"
#include"Figure.h"

class Circle : public Figure
{
public:
	Circle();
	Circle(char arr[][5]);
	Circle(char arr[][5], string name, int x, int y) ;
	Circle(char arr[][5],int x, int y) ;
	Circle(char arr[][5], string name);
	~Circle();
};
