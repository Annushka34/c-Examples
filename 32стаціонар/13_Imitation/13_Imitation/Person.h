#pragma once
#include"Header.h"
class Person // ����������� ����
{
	string name;
	int age;
public:
	string surname;
	void Show();
	void SetData(string name, int age);
protected:
	void TestProtected()
	{
		cout << "protected method in Person\n";
	}
};


