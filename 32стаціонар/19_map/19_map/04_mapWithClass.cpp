//#include<iostream>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//#include<set>
//
//using namespace std;
//
//struct Person
//{
//	Person() = default;
//	Person(string s, int a)
//	{
//		name = s;
//		age = a;
//	}
//	string name;
//	int age;
//	void Show()
//	{
//		cout << name << " " << age << endl;
//	}
//};
//
//ostream & operator << (ostream & out, const multimap<string, Person> m)
//{
//	for (auto el : m)
//	{
//		out << "key: " << setw(10) << left << el.first << " value: ";
//		el.second.Show();
//	}
//	return out;
//}
//
//
//void main()
//{
//	multimap<string, Person> m
//	{
//		{"economist", Person("Pupkin", 25) },
//		{"economist", Person("Petrov", 30) },
//		{"programmer", Person("Ivanov", 22) }
//	};
//	cout << m;
//
//
//	map<string, Person> m1;	
//	m1["developer"] = Person("Ivanov", 22);
//	
//
//	Person p1("Petrov", 22);
//	m1["designer"] = p1;
//	m1["designer"].Show();
//
//	cout << "\n**********************unordered_map**********************\n";
//	unordered_map<string, string> m3
//	{
//		{"pupkin","vasja"},
//		{"sidorov","misha"},
//		{"ivanov","kolja"},
//		{"vasiljev","ivan"},
//		{"lodochkin","petro"},
//	};
//	for (auto el : m3)
//	{
//		cout << el.first << " " << el.second << endl;
//	}
//
//
//	map<string, set<string>> m5;
//	m5["Volyn"].insert("Lutsk");
//	m5["Volyn"].insert("Brodi");
//
//
//	m5["RivneRegion"].insert("Rivne");
//	m5["RivneRegion"].insert("Kostopil");
//	m5["RivneRegion"].insert("Ostrig");
//
//	cout << endl << endl;
//	for (auto el : m5["RivneRegion"])
//	{
//		cout << el<<" ";
//	}
//
//
//	cout << endl << endl;
//	for (auto el : m5["Volyn"])
//	{
//		cout << el << " ";
//	}
//
//
//}