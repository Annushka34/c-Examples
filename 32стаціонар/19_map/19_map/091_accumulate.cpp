//#include<iostream>
//#include<Windows.h>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//#include<set>
//#include<algorithm>
//#include<array>
//#include<vector>
//#include<list>
//#include<numeric>
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
//	Print("Accumulate");
//	vector<int> v{ -5, 2, 3, -8};
//	//---sum all values, start value = 0
//	cout<< "sum:"<< accumulate(v.begin(), v.end(), 0);
//	cout << endl;
//
//	cout << "multiply: " << accumulate(v.begin(), v.end(), 1, [](int sum, int y) { cout << "*" << y; return sum * y; });
//	cout << endl;
//}
