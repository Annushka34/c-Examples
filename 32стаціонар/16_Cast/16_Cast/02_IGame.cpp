#include<ctime>
#include<conio.h>
#include<Windows.h>
#include<string>
#include<iostream>


using namespace std;;


class IGame {
protected:
	enum FieldSize { WIDTH = 80, HEIGHT = 40 };
	int field[HEIGHT][WIDTH];
	COORD objectPos;
	char object;

	void gotoXY(int column, int line)
	{
		COORD coord;
		coord.X = column;
		coord.Y = line;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}
	void Setcolor(int col)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
	}
	virtual void SetObject(char  ch) = 0;
	virtual void Run() = 0;
	virtual void SetStartPos(int x, int y) = 0;
public:
	void GameStart() 
	{
		SetObject('*');
		SetStartPos(10, 20);
		while (_kbhit())
		{
			Run();
		}
	}
};

class Lena : public IGame
{
public:

	void SetObject(char  ch)
	{
		object = ch;
	}
	void Run()
	{
		int count = 10;
		SetStartPos(10+count, 20);
			count++;
	}
	void SetStartPos(int x, int y)
	{
			gotoXY(x, y);
			cout << " " << object;
			Sleep(800);
	}
};

void main()
{
	IGame * g = new Lena();
	g->GameStart();
}