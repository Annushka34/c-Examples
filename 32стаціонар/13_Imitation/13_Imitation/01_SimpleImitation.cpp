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


	Child ch;
	ch.SetToy("boll");
	ch.ShowToy();
}