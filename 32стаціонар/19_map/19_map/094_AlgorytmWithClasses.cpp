#include<iostream>
#include<Windows.h>
//#include<map>
//#include<unordered_map>
#include<string>
//#include<iomanip>
//#include<set>
#include<algorithm>
#include<array>
#include<vector>
#include<list>
//#include<numeric>

using namespace std;
void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
void Print(string w)
{
	SetCol(10);
	cout << "\n---------------------" << w << "------------------------\n";
	SetCol(7);
}

class Person
{
	string name;
	int age;
	double salary;

public:
	Person() = default;
	Person(string name, int age, double salary) : name(name), age(age), salary(salary) {}
	string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}
	void SetName(string n)
	{
		name = n;
	}
	void SetAge(int a)
	{
		age = a;
	}
	void SetSalary(double s)
	{
		salary = s;
	}
	void Show() const
	{
		cout << "Person: " << name << " " << age << " salary: " << salary << endl;
	}

	friend bool operator == (const Person & p1, const Person & p2);
	friend bool operator > (const Person & p1, const Person & p2);
	friend bool operator < (const Person & p1, const Person & p2);
	friend ostream & operator << (ostream & out, const Person & p);
};
ostream & operator << (ostream & out, const Person & p)
{
	p.Show();
	return out;
}
bool operator == (const Person & p1, const Person & p2)
{
	return p1.name == p2.name;
}
bool operator > (const Person & p1, const Person & p2)
{
	return p1.age < p2.age;
}
bool operator < (const Person & p1, const Person & p2)
{
	return p1.age > p2.age;
}


bool FindPersonByName(Person &p)
{
	return p.GetName() == "Ivanov";
}

class FindPersonByNamePred
{
	string name;
public:
	FindPersonByNamePred(string n) :name(n) {}
	bool operator()(Person &p)
	{
		return p.GetName() == name;
	}
};

class FindPersonByAgePred
{
	int age;
public:
	FindPersonByAgePred(int n) :age(n) {}
	bool operator()(Person &p)
	{
		return p.GetAge() == age;
	}
};

void main()
{
	Print("---1---");
	Person p("Ivanov", 20, 2000);
	Person p1("Petrov", 32, 3500);
	Person p2("Sidorov", 18, 6800);
	Person p3("Ivanov", 20, 9200);


	/*vector<Person*> v
	{
		&p, &p1, &p2, &p3
	};
	v.push_back(&p);

	int age_m = 30;
	for_each(v.begin(), v.end(), [age_m](Person *p) {  p->SetAge(age_m); });
	for_each(v.begin(), v.end(), [](Person *p) {  p->Show(); });

	Print("Find person");
	Person * pF = v[2];
	auto findedPerson = find(v.begin(), v.end(), pF);
	cout << (*(*findedPerson));*/


	Print("---2---");
	vector<Person> v2
	{
		p, p1, p2, p3
	};
	v2.push_back(p);

	
	//for_each(v.begin(), v.end(), [age_m](Person &p) {  p.SetAge(age_m); });
	for_each(v2.begin(), v2.end(), [](Person &p) {  p.Show(); });

	string name;
	/*Print("Find person");
	cout << "\nEnter name:";
	cin >> name;
	Person findIt(name, 0, 0);
	auto fIt2 = find(v2.begin(), v2.end(), findIt);
	fIt2 != v2.end() ? cout << (*fIt2) : cout << "no such person";

	Print("---Find from predicate---");
	fIt2 = find_if(v2.begin(), v2.end(), FindPersonByName);
	fIt2 != v2.end() ? cout<<(*fIt2) : cout<<"no such person";*/


	Print("---Find from predicate class---");
	cout << "\nEnter name:";
	cin >> name;
	/*fIt2 = find_if(v2.begin(), v2.end(), FindPersonByNamePred(name));
	fIt2 != v2.end() ? cout << (*fIt2) : cout << "no such person";*/

	copy_if(v2.begin(), v2.end(), ostream_iterator<Person>(cout, " : "), FindPersonByNamePred(name));

	int age;
	cout << "\nEnter age:";
	cin >> age;
	copy_if(v2.begin(), v2.end(), ostream_iterator<Person>(cout, " : "), FindPersonByAgePred(age));
}
