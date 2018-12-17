//#include <iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//	string _name;
//	string _surname;
//public:
//	Person()
//	{
//		cout << "defolt constr Person\n";
//		_name = "none";
//	}
//	Person(string name)
//	{
//		cout << "constr Person\n";
//		_name = name;
//	}
//	string Name() { return _name; }
//	string Surname() { return _surname; }
//
//	virtual void Show()
//	{
//		cout << _name;
//	}
//
//	virtual ~Person()
//	{
//	}
//};
//
//class Gamer : public virtual Person
//{
//	int score;
//public:
//	Gamer()
//	{
//		cout << "constr Gamer\n";
//	}
//	Gamer(string name):Person(name)
//	{
//		cout << "constr Gamer\n";
//		score = 10;		
//	}
//	void Show()
//	{
//		cout << "  I have score in this game: " << score;
//	}
//};
//
//class Student : public virtual Person
//{
//	int mark;
//public:
//	Student()
//	{
//		cout << "constr Student\n";
//	}
//	Student(string name):Person(name)
//	{
//		cout << "constr Student\n";
//		mark = 12;
//	}
//	void Show()
//	{
//		cout << "  I have mark by this subject: " << mark;
//	}
//};
//
//class BadStudent : public Gamer, public Student
//{
//public:
//	BadStudent()
//	{
//		cout << "constr BadStudent\n";
//	}
//	/*BadStudent(string name):Student(name),Gamer(name)
//	{
//		cout << "constr BadStudent\n";
//	}*/
//	BadStudent(string name):Person(name),Student(name), Gamer(name)
//	{
//		cout << "constr BadStudent\n";
//	}
//	void Show()
//	{
//		cout << Person::Name() << endl;
//		cout << Gamer::Person::Name() << endl;
//		cout << Student::Person::Name() << endl;
//	}
//};
//
//void main()
//{
//	BadStudent vasja;
//	vasja.Show();
//	BadStudent petja("petja");
//	petja.Show();
//}
