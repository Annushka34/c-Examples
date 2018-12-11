#include"Figure.h"
Figure::Figure(char arr[][5])
{
	SetColor(10);
	cout << "Constructor Base class figure\n";
	SetColor(7);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			figArr[i][j] = arr[i][j];
		}
	}
}
Figure::Figure(char arr[][5], string name, int x, int y)
{
	posX = x;
	posY = y;
	this->name = name;
	SetColor(10);
	cout << "Constructor Base class figure\n";
	SetColor(7);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			figArr[i][j] = arr[i][j];
		}
	}
}
Figure::Figure() 
{
	SetColor(9);
	cout << "Constructor Base class figure Default\n";
	SetColor(7);
}
void Figure::ShowFigure()
{
	cout << name << " " << posX << " " << posY << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << figArr[i][j];
		}
		cout << endl;
	}
}
Figure::~Figure()
{
	SetColor(10);
	cout << "Destructor Base class figure\n";
	SetColor(7);	
}