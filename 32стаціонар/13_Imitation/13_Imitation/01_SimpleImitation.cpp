#include"Header.h"
#include"Person.h"
#include"Student.h"
#include"Employee.h"
#include"Child.h"

//1 приватні поля - приватне наслідування - вони є але вони не доступні
//2 публічні поля - приватне наслідування - вони є але доступні лише в межах наслідника
//3 публічне наслідування - всі ті самі модифікатори лишаються як в батьківському класі


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
	//Person p; // ---просто створили екземпляр базового класу
	//p.SetData("vasja", 25);
	//p.surname = "Pupkin";
	//p.Show();

	//Student st;// ---екземпляр класу Студент який приватно наслідував Персон (поля Персона тут недоступні)
	//st.SetScholarship(2000.5);
	//st.GetScholarship();

	//Employee empl;// --- екземпляр класу Емплойі який публічно наслідував Персон. Публічні поля Персона доступні
	//empl.SetData("PupkinGoWork", 30);//  -- від Персоона
	//empl.SetSalary(25000.5);// --- від Емплойі
	//empl.Show();// -- від Персона
	//cout << empl.GetSalary() << endl;// -- від Емплойі
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