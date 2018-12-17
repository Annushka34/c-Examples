#include<iostream>
#include<string>
using namespace std;

class IFlyable // abstract class (can't create instance), must to realize all methods
{
public:
	virtual void IFly()  = 0;
	virtual void ShowSpeed() = 0;
	virtual void Stop() = 0;
};

class Bird // abstract class, must realize method SetName
{
	string name;
public:
	virtual void Show()// exist realization
	{
		cout << name << endl;
	}
	virtual void SetName() = 0;
};

class FlyingBird : public Bird, public IFlyable
{
public:
	FlyingBird()
	{
			
	}
	void IFly()
	{

	}
	void ShowSpeed()
	{

	}
	void Stop()
	{

	}
	void SetName()
	{

	}
};

class Cat
{
	string name;
public:
	virtual void Show()
	{
		cout << name << endl;
	}
	virtual ~Cat() = 0 {}
};

class WildCat : public Cat
{

};

void main()
{
	Cat * c = new WildCat();
	//Cat * cat1 = new Cat();
	//Bird b;

}