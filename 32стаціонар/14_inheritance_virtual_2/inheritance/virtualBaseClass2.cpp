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
//		_name = "person";
//	}
//	string Name() { return _name; }
//	string Surname() { return _surname; }
//	void SetName(string name)
//	{
//		_name = name;
//	}
//	virtual void Show()
//	{
//		cout << _name;
//	}
//};
//
//class Gamer: public virtual Person
//{
//	int score;
//public:
//	Gamer()
//	{
//		score = 10;
//		Person::SetName("gamer");
//	}
//	void Show()
//	{
//		cout << "  I have score in this game: " << score;
//	}
//};
//
//class Student: public virtual Person
//{
//	int mark;
//public:
//	Student()
//	{
//		mark = 12;
//		Person::SetName("student");
//	}
//	void Show()
//	{
//		cout << "  I have mark by this subject: " << mark;
//	}
//};
//
//class BadStudent : public Student, public Gamer
//{
//public:
//	BadStudent()
//	{
//		
//	}
//	void Show()
//	{
//		cout<<Person::Name()<<endl;
//		cout << Gamer::Person::Name() << endl;
//		cout << Student::Person::Name() << endl;
//	}
//};
//
//void main()
//{
//	BadStudent vasja;
//	vasja.Show();
//	//vasja.SetName("vasja");//mistake
//	vasja.Gamer::SetName("vasja");
//	vasja.Show();
//
//	vasja.Student::SetName("olga");
//	vasja.Show();
//}
