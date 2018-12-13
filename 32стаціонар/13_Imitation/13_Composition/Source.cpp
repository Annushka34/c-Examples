#include"Header.h"
#include"Firm.h"


void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

void main()
{
	Firm f;
	f.Show();

	Employee e("Vasja");
	f.AddEmployee(&e);
	f.Show();


	Employee p("Petja");
	Employee p1("Olga");
	Employee p2("Ivan");
	Employee p3("Ruslan");
	Employee p4("Irina");
	f.AddEmployee(&p);
	f.AddEmployee(&p1);
	f.AddEmployee(&p2);
	f.AddEmployee(&p3);
	f.AddEmployee(&p4);
	f.Show();
}