#pragma once
#include"Header.h"
class Figure
{
	enum  {col = 5, row = 5};
	char figArr[5][5];
	int posX;
	int posY;
protected:
	string name;
public:
	Figure(char arr[][5]);
	Figure(char arr[][5], string name, int x, int y);
	Figure();
	void ShowFigure();
	~Figure();
};