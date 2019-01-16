#include<iostream>
#include<Windows.h>
#include<map>
#include<unordered_map>
#include<string>
#include<iomanip>
#include<set>
#include<algorithm>
#include<array>

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

void main()
{
	array<int, 7> arr = { 1,2,5,7,8,13, 5 };
	vector <int> v = { 1,2,5,15,8,13 };
	vector<string> vStr = { "hello", "bye", "mother", "father", "sister", "brother" };
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	copy(vStr.begin(), vStr.end(), ostream_iterator<string>(cout, ", "));
	cout << endl;

	//----------FIND----------
	Print("Find");
	auto it = find(arr.begin(), arr.end(), 5);
	if (it != arr.end())
	{
		cout << *it << endl;
	}
	Print("Find father");
	auto it1 = find(vStr.begin(), vStr.end(), "father");
	if (it1 != vStr.end())
	{
		cout <<(it1 - vStr.begin())<< *it1 << endl;
	}

	//-----COUNT--------------
	Print("Find");
	cout <<"5 => "<< count(arr.begin(), arr.end(), 5) << endl;
	cout << "aaa => " << count(vStr.begin(), vStr.end(), "aaa") << endl;


	//-----SORT----------
	Print("Sort");
	sort(arr.begin(), arr.end());
	sort(vStr.begin(), vStr.end());
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ", "));
	cout << endl;
	copy(vStr.begin(), vStr.end(), ostream_iterator<string>(cout, ", "));
	cout << endl;
	auto word_1 = *vStr.begin();
	cout << word_1 << endl;

	//---sort word by letters---
	//sort(word_1.begin(), word_1.end());
	sort((*vStr.begin()).begin(), (*vStr.begin()).end());
	copy(vStr.begin(), vStr.end(), ostream_iterator<string>(cout, ", "));
	cout << endl;

	//----SEARCH----
	Print("SEARCH");
	auto it2 = search(arr.begin(), arr.end(), v.begin(), v.begin() + 3);
	if (it2 != arr.end())
	{
		cout << *it2 << " pos: " << it2 - arr.begin() << endl;
	}

	//---MERGE
	Print("MERGE");
	sort(v.begin(), v.end());
	array<int,9> arr2;
	merge(arr.begin(), arr.begin() + 3, v.begin(), v.end(), arr2.begin());
	copy(arr2.begin(), arr2.end(), ostream_iterator<int>(cout, ", "));

	vector<int> v2(5);
	int size = arr.size() + v.size();
	v2.resize(size);	
	merge(arr.begin(), arr.end(), v.begin(), v.end(), v2.begin());
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, ", "));

	//----ITERATORS INSERTER----
	Print("ITERATORS INSERTER");
	/*cout << "vector befor: ";
	fill(v.begin(), v.end(), 2);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	cout << "vector after: ";
	v.resize(7);*/
	list<int> l;
	cout << "arr: ";
	copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, ", "));
	copy(arr.begin(), arr.end(), front_inserter(l));
	cout << "\nlist: ";
	copy(l.begin(), l.end(), ostream_iterator<int>(cout, ", "));

	copy(arr.begin(), arr.end(), back_inserter(l));
	cout << "\nlist: ";
	copy(l.begin(), l.end(), ostream_iterator<int>(cout, ", "));


	auto itB = l.begin(); itB++; itB++;
	copy(arr.begin(), arr.end(), inserter(l, itB));
	cout << "\nlist: ";
	copy(l.begin(), l.end(), ostream_iterator<int>(cout, ", "));
}
