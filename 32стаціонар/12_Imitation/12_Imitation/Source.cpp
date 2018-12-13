#include"Amphibia.h"
#include"Animal.h"
#include"Bierd.h"
#include"Cats.h"
#include"Mammals.h"
#include"Tailing.h"
#include"Tumultuous.h"
#include"Header.h"

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void main()
{
	Animal * an = new Animal("*******");
	an->Show();
	Amphibia * amph = new Amphibia("Amphibia");
	amph->Show();
	Animal * an2 = new Amphibia("Amphibia");// pointer type Animal object type Amphibia
	an2->Show();

	//Animal  arr2[5]; - try to create 5 objects using defoult constructor (mistake becouse we override it)
	Animal * arr[5];//---crete 5 poiners nullptr
	for (size_t i = 0; i < 5; i++)
	{
		int yourObjectInd = 0;
		cin >> yourObjectInd;
		switch (yourObjectInd)
		{
		case 1: { arr[i] = new Cats("Tiger"); break; }
		case 2: { arr[i] = new Bierd("Parrot"); break; }
		case 3: { arr[i] = new Tailing("Turtuals"); break; }
		case 4: { arr[i] = new Tumultuous("Frog"); break; }
		}
	}

	for (size_t i = 0; i < 5; i++)
	{
		arr[i]->Show();// call Show from base class Animal becouse pointer type is Animal, alphouth objects are different types
	}
}