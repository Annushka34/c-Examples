#include"Child.h"
	void Child::SetToy(string toy)
	{
		toyName = toy;
	}
	void Child::ShowToy()
	{
		TestProtected();
		cout << "toy: " << toyName << endl;
	}