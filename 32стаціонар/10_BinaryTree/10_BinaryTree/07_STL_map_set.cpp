#include <iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

class Human {

};
void main()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(13);
	s1.insert(12);
	s1.insert(18);
	//cout<< *(s1.find(12));
	//cout<< (*(s1.begin()))<<" ";
	auto ptr = s1.begin();
	while (ptr != s1.end())
	{
		cout << (*ptr) << " ";
		ptr++;
	}
	
	//auto a = "hello";
	//Human h;
	//cout << typeid(h).name() << endl;

	//map<int, string> m1;
	//m1.emplace(10, "hello");
	//string el =m1.at(10);
	//cout << typeid(el).name() << endl;
	//cout << el << endl;

}