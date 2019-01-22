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
//bool HowCopy(string str)
//{
//	/*if (tolower(str.at(0)) == 'a')
//		return true;
//	else
//		return false;*/
//	return tolower(str.at(0)) == 'a';
//}
//
////class MyClass
////{
////	string name = "Vasja";
////	int arr[5];
////public:
////	void operator ()(string s)
////	{
////		name = s;
////	}
////	MyClass()
////	{
////		for (int i = 0; i< 5; i++)
////		{
////			arr[i] = i;
////		}
////	}
////	void operator[](int ind)
////	{
////		cout << arr[ind];
////	}
////	void Show()
////	{
////		cout << name;
////	}
////};
//
//class Pred
//{
//public:
//	bool operator()(int num)
//	{
//		//PrintOneEl(num);
//		return num > 10;
//	}
//
//	void PrintOneEl(int el)
//	{
//		cout << "*" << el << "*" << endl;
//	}
//};
//
//class Func
//{
//public:
//	void operator() (int num)
//	{
//		cout << "[";
//		if (num %2 == 0)
//		{
//			cout << num;
//		}
//		cout << "]" << endl;
//	}
//};
//
//void main()
//{
//	//-----------CASE 1: ----------USE PREDICAT AS SIMPLE FUNCTION--------------
//	array<string, 6> arr{ "ahello","bye","Amother","afather","sister","AA123456" };
//	array<string, 6> arr2;
//	array<string, 6> arr3;
//	array<string, 6>::iterator itBeg = arr2.begin();
//	copy(arr.begin(), arr.end(), itBeg);
//	copy(arr2.begin(), arr2.end(), ostream_iterator<string>(cout, ","));
//	Print("COPY IF: ");
//	copy_if(arr.begin(), arr.end(), arr3.begin(), HowCopy);
//	copy(arr3.begin(), arr3.end(), ostream_iterator<string>(cout, ","));
//
//	Print("COUNT BYE: ");
//	cout<< count(arr.begin(), arr.end(), "bye");
//	cout << count_if(arr.begin(), arr.end(), HowCopy);
//
//
//	//-------CASE 2: ------USE PREDICAT AS LAMBDA----------
//	vector<string> v{ "ahello","bye","Amother","afather","sister","AA123456" };
//	copy(v.begin(), v.end(), ostream_iterator<string>(cout, ","));
//	Print("ALL LENGTH > 5");
//	copy_if(v.begin(), v.end(), ostream_iterator<string>(cout, ","), [](string el) {return el.length() > 5; });
//
//
//	//------CASE 3: ----------USE PREDICAT AS CLASS WITH SCOPES OVERLOAD---
//	Print("Scopes overload:");
//	/*MyClass myClassObj;
//	myClassObj[2];
//	myClassObj("Olga");
//	myClassObj.Show();*/
//
//	list<int> li{ 2,5,10,44,6,72,8 };
//	Pred p;
//	copy_if(li.begin(), li.end(), ostream_iterator<int>(cout, ","), p);
//	cout << endl;
//	copy_if(li.begin(), li.end(), ostream_iterator<int>(cout, ","), Pred());
//
//
//	//-----FOR_EACH----
//	Print("-FOR_EACH-:");
//	for_each(li.begin(), li.end(), [](int el) { cout << " -- " << el << " -- "; });
//	cout << endl;
//	for_each(li.begin(), li.end(), [](int el) { cout << " -- " << el*2 << " -- "; });
//	cout << endl;
//	for_each(li.begin(), li.end(), [](int el) { cout << " -- " << (el > 10? to_string(el) : " * ") << " -- "; });
//	cout << endl;
//	//----DON'T CHANGE IF NOT REFERENSED---
//	for_each(li.begin(), li.end(), [](int &el) { el *= 10; });
//	for_each(li.begin(), li.end(), [](int el) { cout << " -- " << el << " -- "; });
//	//-----------------
//	for_each(li.begin(), li.end(), Func());
//	cout << endl;
//	cout<<GetConsoleCP();
//}
