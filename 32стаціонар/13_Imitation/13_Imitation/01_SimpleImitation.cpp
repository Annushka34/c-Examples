#include"Header.h"
#include"Person.h"
#include"Student.h"
#include"Employee.h"
#include"Child.h"

//1 ������� ���� - �������� ����������� - ���� � ��� ���� �� �������
//2 ������ ���� - �������� ����������� - ���� � ��� ������� ���� � ����� ���������
//3 ������� ����������� - �� � ��� ������������ ��������� �� � ������������ ����


void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

void ShowPerson(Person *p, int type)
{
	switch (type)
	{
	case 1:
	{
		((Child*)p)->Show();
		break;
	}
	case 2:
	{
		((Employee*)p)->Show();
		break;
	}
	case 3:
	{
		p->Show();
		break;
	}
	}
	//delete p;
}

void main()
{
	//SetColor(10);
	//Person p; // ---������ �������� ��������� �������� �����
	//p.SetData("vasja", 25);
	//p.surname = "Pupkin";
	//p.Show();

	//Student st;// ---��������� ����� ������� ���� �������� ��������� ������ (���� ������� ��� ���������)
	//st.SetScholarship(2000.5);
	//st.GetScholarship();

	//Employee empl;// --- ��������� ����� ������ ���� ������� ��������� ������. ������ ���� ������� �������
	//empl.SetData("PupkinGoWork", 30);//  -- �� ��������
	//empl.SetSalary(25000.5);// --- �� ������
	//empl.Show();// -- �� �������
	//cout << empl.GetSalary() << endl;// -- �� ������
	//string str;
	//getline(cin, str);


	//Child ch;
	//ch.SetToy("boll");
	//ch.Show();


	//Child* chPtr;
	//chPtr = new Child();
	//delete chPtr;
	//chPtr = new Child();
	Person* p12 = new Child();
	((Child*)p12)->Show();
	ShowPerson(p12, 1);
	ShowPerson(new Employee(), 2);
	ShowPerson(new Student(), 3);
}