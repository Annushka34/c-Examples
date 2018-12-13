#include"Child.h"
	void Child::SetToy(string toy)
	{
		toyName = toy;
	}
	void Child::Show()
	{
		Person::Show();
		//TestProtected();
		cout << "toy: " << toyName << endl;
	}