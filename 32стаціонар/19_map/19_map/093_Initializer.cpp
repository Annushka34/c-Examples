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
//class MyClass
//{
//	int arr[10] = {};
//public:
//	MyClass() = default;
//	MyClass(initializer_list<int> li)
//	{
//		int i = 0;
//		for (auto it = li.begin(); it != li.end(); it++, i++)
//		{
//			arr[i] = (*it);		
//		}
//	}
//	void Show()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			cout << arr[i]<<" ";
//		}
//	}
//};
//
//
//template<class T>
//class MyClassIntArr
//{
//	T *arr = nullptr;
//	int size = 0;
//public:
//	MyClassIntArr() = default;
//	MyClassIntArr(initializer_list<T> li)
//	{
//		arr = new T[li.size()];
//		size = li.size();
//		int i = 0;
//		for (auto it = li.begin(); it != li.end(); it++, i++)
//		{
//			arr[i] = (*it);
//		}
//	}
//	void Show()
//	{
//		for (size_t i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//};
//
//
//class MyClassPerson
//{
//	string name;
//	int age;
//public:
//	MyClassPerson() = default;
//	MyClassPerson(initializer_list<string> li)
//	{
//		name = *li.begin();
//		auto it = li.begin(); it++;
//		string ageStr = *it;
//		age = atoi(ageStr.c_str());
//	}
//	void Show()
//	{
//		cout << name << " " << age << endl;
//	}
//};
//
//
//void main()
//{
//	Print("Init array in my class");
//	/*MyClass myClass {1,2,3,5,7};
//	myClass.Show();*/
//
//	MyClassIntArr<int> myArr{ 2,5,7,8,10 };
//	myArr.Show();
//	Print("Init array in my class (T = string)");
//	cout << endl;
//	MyClassIntArr<string> myArr2 { "Imagine", "Image", "Imagination", "Img"};
//	myArr2.Show();
//	cout << endl;
//
//	MyClassPerson person { "Ivanov", "20" };
//	person.Show();
//}
