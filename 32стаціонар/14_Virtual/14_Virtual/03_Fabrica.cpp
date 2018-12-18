#include<iostream>
using namespace std;

class Pizza
{
public:
	virtual void PreparePizza() = 0;
};

class MilanPizza : public Pizza
{
	void PreparePizza() override
	{
		cout << "Milan pizza\n";
	}
};

class GreekPizza : public Pizza
{
	void PreparePizza() override
	{
		cout << "Greek pizza\n";
	}
};

class Souse
{
public:
	virtual void PrepareSouse() = 0;
};
class MilanSouse : public Souse
{
	void PrepareSouse() override
	{
		cout << "Milan Souse\n";
	}
};

class GreekSouse : public Souse
{
	void PrepareSouse() override
	{
		cout << "Greek Souse\n";
	}
};


class Fabrica //--abstarct fabrica
{
public:
	virtual Pizza * CreatePizza() = 0;
	virtual Souse * CreateSouse() = 0;
};

class FabricaMilan : public Fabrica
{
public:
	Pizza * CreatePizza() override
	{
		return new MilanPizza();
	}
	Souse * CreateSouse() override
	{
		return new MilanSouse();
	}
};

class FabricaGreek : public Fabrica
{
public:
	Pizza * CreatePizza() override
	{
		return new GreekPizza();
	}
	Souse * CreateSouse() override
	{
		return new GreekSouse();
	}
};

class Product
{
	Pizza * _p;
	Souse *_s;
public:
	Product(Pizza * p, Souse * s)
	{
		_p = p;
		_s = s;
	}
	void EatProduct()
	{
		_p->PreparePizza();
		_s->PrepareSouse();
}
};

void main()
{
	/*Pizza *p = new MilanPizza();
	p->PreparePizza();
	delete p;
	p = new GreekPizza();
	p->PreparePizza();
	delete p;*/

	//Fabrica * fabr = new FabricaGreek();
	Fabrica * fabr = new FabricaMilan();
	Product p(fabr->CreatePizza(), fabr->CreateSouse());
	p.EatProduct();
}