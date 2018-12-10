//#include<iostream>
//#include <process.h>
//#include<conio.h>
//
//using namespace std;
//
//void foo1(void * params)
//{
//	cout << "begin thread 1\n";
//	for (size_t i = 0; i < 100; i++)
//	{
//		cout << i << " ";
//	}
//	cout << "end thread 1\n";
//	cout << endl;
//}
//void foo2(void *params)
//{
//	int* num = (int*)params;
//	cout << "begin thread 2\n";
//	for (size_t i = 0; i < (*num); i++)
//	{
//		cout << i << " ";
//	}
//	cout << "end thread 2\n";
//	cout << endl;
//}
//
//void main()
//{
//	cout << "begin main\n";
//	_beginthread(foo1, 0, NULL);
//	int a = 5;
//	_beginthread(foo2, 0, &a);
//	for (size_t i = 0; i < 50; i++)
//	{
//		cout << "*";
//	}
//	_getch();
//}