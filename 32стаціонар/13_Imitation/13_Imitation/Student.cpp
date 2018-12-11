#include"Student.h"
	void Student::SetScholarship(double scholarship)
	{
		string studName, studSurname;
		int studAge;
		cout << "Enter studen data: ";
		cin >> studName;
		cin >> studSurname;
		cin >> studAge;
		this->surname = studSurname;
		SetData(studName, studAge);
		this->scholarship = scholarship;
	}
	void Student::GetScholarship()
	{
		Show();
		cout << " " << scholarship << endl;
	}