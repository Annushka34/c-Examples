#include"Person.h"
	void Person:: Show()
	{
		SetColor(12);
		cout << "Show from person: ";
		cout << "Name: " << name << " Suraname: " << surname << " Age: " << age << endl;
	}
	void Person:: SetData(string name, int age)
	{
		this->name = name;
		this->age = age;
	}



