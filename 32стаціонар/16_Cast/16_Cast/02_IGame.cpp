#include<ctime>
#include<conio.h>
#include<Windows.h>
#include<string>


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

void main()
{
	IGame * g =  
}