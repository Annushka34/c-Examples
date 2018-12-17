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
//class IPerson: public Person
//{
//public:
//	virtual void personShow() = 0;
//	void Show() { personShow(); }
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
//		cout <<"  I have score in this game: "<< score;
//	}
//};
//class IGamer : public Gamer
//{
//public:
//	virtual void gamerShow() = 0;
//	void Show() { gamerShow(); }
//};
//
//class SimpleGamer :public Gamer, public Person, public IGamer, public IPerson
//{
//public:
//	void gamerShow() { Person::Show(); Gamer::Show(); }
//	void personShow() { return Person::Show(); }
//};
////
////void main()
////{
////	IGamer *g= new SimpleGamer();
////	IPerson*p = new SimpleGamer();
////	cout << endl;
////	g->Show();
////	cout << endl;
////	p->Show();
////	cout << endl;
////}