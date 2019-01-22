//#include<iostream>
//#include<Windows.h>
////#include<map>
////#include<unordered_map>
//#include<string>
////#include<iomanip>
////#include<set>
//#include<algorithm>
//#include<array>
//#include<vector>
//#include<list>
////#include<numeric>
//
//
//
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
//
//
//void main()
//{
//	Print("Greater");
//	vector<int> v{ -5, 2, 3, -8 };
//	for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
//	cout << endl;
//	//----included Functors in STL---
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
//	Print("Less");
//	sort(v.begin(), v.end(), less<int>());
//	for_each(v.begin(), v.end(), [](int x) { cout << x << " "; });
//	cout << endl;
//
//
//	//-----
//	//ітераторри встаки
//	//---back_inserter - вставляє нові елементи в кінець
//	//---front_inserter - ставляє нові елемент на початок
//	//-- inserter - вставляє нові елементи у вказане місце
//	Print("V 2");
//	vector<int> v2{ 10 };
//	list<int> li{ 10, 11, 12 };
//	v2.resize(5);
//	//copy(v.begin(), v.end(), v2.begin());
//	//copy(v.begin(), v.end(), back_inserter(v2));
//	//for_each(v2.begin(), v2.end(), [](int x) { cout << x << " "; });
//
//
//	/*copy(v.begin(), v.end(), front_inserter(li));
//	for_each(li.begin(), li.end(), [](int x) { cout << x << " "; });
//	cout << endl;*/
//
//	auto itInsert = li.begin();
//	itInsert++;
//	copy(v.begin(), v.end(), inserter(li, itInsert));
//	for_each(li.begin(), li.end(), [](int x) { cout << x << " "; });
//	cout << endl;
//}
