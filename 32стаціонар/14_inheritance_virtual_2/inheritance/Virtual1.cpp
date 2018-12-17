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
//	virtual void Show()
//	{
//		cout << _name;
//	}
//};
//
//class Gamer
//{
//	int score;
//public:
//	Gamer()
//	{
//		score = 10;
//	}
//	virtual void Show()
//	{
//		cout << "  I have score in this game: " << score;
//	}
//};
//
//class SimpleGamer: public Gamer,public Person
//{
//	void Show()
//	{
//		Gamer::Show();
//		cout << endl;
//		Person::Show();
//		cout << endl;
//	}
//};
//
//void main()
//{
//	Gamer *g= new SimpleGamer();
//	Person*p = new SimpleGamer();
//	g->Show();
//	p->Show();
//}