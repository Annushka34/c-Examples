#include"Circle.h"

Circle::Circle()
{
	SetColor(8);
	cout << "Constructor Circle\n";
	name = "Circle";
	SetColor(7);
}

Circle::Circle(char arr[][5]):Figure(arr)
{
	name = "Circle";
}

Circle::Circle(char arr[][5], string name, int x, int y) : Figure(arr, name, x, y)
{
	this->name = name;
}

Circle::Circle(char arr[][5], string name) : Figure(arr, name, 10,10)
{
	this->name = name;
}

Circle::Circle(char arr[][5], int x, int y) : Figure(arr,"Circle", x, y)
{
}

Circle::~Circle()
{
	SetColor(8);
	cout << "Destructor Circle\n";
	SetColor(7);
}