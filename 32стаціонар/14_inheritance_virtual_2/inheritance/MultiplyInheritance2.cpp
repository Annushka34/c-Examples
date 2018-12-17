//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//	string _name;
//	string _surname;
//public:
//	string Name(){return _name;	}
//	string Surname(){ return _surname; }
//};
//
//
//class IStudent
//{
//public:
//	virtual string Name()=0;
//	virtual string Occupation()=0;
//	virtual ~IStudent(){}
//};
//
//class IUser
//{
//public:
//	virtual string Login()=0;
//	virtual ~IUser(){};
//};
//
//class LoginStudent :public Person, public IStudent, public IUser
//{
//	string _password;
//	string _login;
//	string _occupation;
//public:
//	string Name() { return Person::Name() + " " + Person::Surname(); }
//	string Login() { return _login; }
//	string Occupation() { return _occupation; }
//};
