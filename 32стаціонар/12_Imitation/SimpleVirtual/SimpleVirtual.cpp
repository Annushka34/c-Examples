
#pragma once
#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
class TestBaseInterface
{
public:
	virtual void Show() {}
	virtual void SetData() {}
	virtual void Run() {}
	virtual void IncreaseSpead() {}
	virtual void Die() {}
};

class Goblin : public TestBaseInterface
{
	void Show() { cout << "Goblin"; }
	void SetData() {}
	void Run() {}
	void IncreaseSpead() {}
	void Die() {}
};

class Princess : public TestBaseInterface
{
	void Show() { cout << "princess"; }
	void SetData() {}
	void Run() {}
	void IncreaseSpead() {}
	void Die() {}
};

class Base
{
public:
	Base()
	{
		a = 2;
	}

	void Attack(Base * b)
	{
		b->a -= this->a;
	}
	virtual void Show()
	{
		cout << "Base " << a << endl;
	}
protected:
	int a;
};

class Derived1 : public Base
{
public:
	Derived1()
	{
		a = 10;
	}
	void Show()
	{
		cout << "Derived1 " << a << endl;
	}
};


class Derived2 : public Base
{
public:
	Derived2()
	{
		a = 15;
	}
	void Show()
	{
		cout << "Derived2 " << a << endl;
	}
};

void ShowClass(Base * b)
{
	cout << "----show-----\n";
	b->Show();
}

void main()
{
	Base * b1 = new Derived1();
	Base * b2 = new Derived2();
	/*b1->Show();
	b2->Show();*/

	ShowClass(b1);
	ShowClass(b2);
	cout << "---Attack---" << endl;

	b1->Attack(b2);
	b1->Show();
	b2->Show();
	cout << "---Attack---" << endl;
	b1->Attack(b2);
	b1->Show();
	b2->Show();
}