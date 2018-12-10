//#include<iostream>
//#include <thread>
//#include<conio.h>
//#include<mutex>
//#include<Windows.h>
//
//using namespace std;
//void SetColor(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//mutex m;
//
//void foo1(int num)
//{
//	cout << "begin thread 1\n";
//	for (size_t i = 0; i < num; i++)
//	{
//		m.lock();
//		SetColor(12);
//		cout << i << " ";
//		SetColor(7);
//		m.unlock();
//	}
//	cout << "end thread 1\n";
//	cout << endl;
//}
//
//void foo2(int num)
//{
//	cout << "begin thread 2\n";
//	for (size_t i = 0; i < num; i++)
//	{
//		m.lock();
//		SetColor(10);
//		cout << i << " ";
//		SetColor(7);
//		m.unlock();
//	}
//	cout << "end thread 2\n";
//	cout << endl;
//}
//
//void main()
//{
//	thread th1(foo1, 50);
//	thread th2(foo2, 150);
//	cout << "begin main\n";
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << "-";
//	}
//	cout<<"id "<<th1.get_id();
//	cout<< "id " << th2.get_id();
//	th1.join();
//	th2.join();
//	//_getch();
//	cout << "end main\n";
//}