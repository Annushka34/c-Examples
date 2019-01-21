//#include<iostream>
//#include<Windows.h>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//#include<set>
//#include<algorithm>
//#include<array>
//
//using namespace std;
//void SetCol(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//void Print(string w)
//{
//	SetCol(10);
//	cout << "\n---------------------" << w << "------------------------\n";
//	SetCol(7);
//}
//
//bool Compare(int x, int y)
//{
//	return (x > y);
//}
//bool MyCompareString(string x, string y)
//{
//	int len1 = x.length();
//	int len2 = x.length();
//	return (x[len1-1] < y[len2-1]);
//}
//
//
//class Person
//{
//public:
//	int age;
//	string name;
//	double salary;
//	Person(int a, string n, double s)
//	{
//		age = a;
//		name = n;
//		salary = s;
//	}
//	Person() = default;
//	friend ostream & operator << (ostream & out, const Person & p);
//};
//ostream & operator << (ostream & out, const Person & p)
//{
//	return out << p.name << " " << p.age<< " "<<p.salary << endl;
//}
//
//
//bool ComparePerson(const Person &p1, const Person &p2)
//{
//	return (p1.age < p2.age);
//}
//
//bool ComparePersonByName(const Person &p1, const Person &p2)
//{
//	return (p1.name < p2.name);
//}
//
////void Swap(int &x, int &y)
////{
////	int t = x;
////	x = y;
////	y = t;
////}
////
////void Sort(array<int, 7> &arr, int size)
////{
////	for (size_t i = 0; i < size; i++)
////	{
////		for (size_t j = 0; j < size-i - 1; j++)
////		{
////			if (Compare(arr[j], arr[j+1]))
////			{
////				Swap(arr[j], arr[j + 1]);
////			}
////		}
////	}
////}
//
//
//void main()
//{
//	array<int, 7> arr = { 2,22,5,7,8,13, 5 };
//	//Sort(arr, 7);
//
//	sort(arr.begin(), arr.end(), Compare);
//
//
//	sort(arr.begin(), arr.end(), [](int x, int y) { return x > y; });
//	for (auto el: arr)
//	{
//		cout << el << " ";
//	}
//
//	Print("STRING COMPARE");
//	vector<string> v{ "motherb","fathera","sister","brother","babby" };
//	sort(v.begin(), v.end(), MyCompareString);
//	for (auto el : v)
//	{
//		cout << el << "\n";
//	}
//
//	Print("PERSON COMPARE");
//	vector<Person> lP
//	{
//		{10, "Petja", 2000.52},
//		{22, "Olga",12000},
//		{33, "Ivan",8000},
//	};
//	lP.push_back(Person(25, "Petro",6500));
//	for (auto el : lP)
//	{
//		cout << el;
//	}
//	//sort(lP.begin(), lP.end(), ComparePerson);
//	sort(lP.begin(), lP.end(), [](const Person &p1, const Person &p2) {return p1.salary < p2.salary; });
//	Print("AFTER SORT");
//	for (auto el : lP)
//	{
//		cout << el;
//	}
//
//	string word_start = "hello";
//	string word = word_start;
//	while (word.length() != 2)
//	{
//		do
//		{
//			cout << word << endl;
//		} while (next_permutation(word.begin(), word.end()));
//		word_start.pop_back();
//		word = word_start;
//	}
//}
