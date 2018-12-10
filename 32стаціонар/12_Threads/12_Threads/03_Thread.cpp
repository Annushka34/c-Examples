//#include<iostream>
//#include <thread>
//#include<conio.h>
//#include<mutex>
//#include<Windows.h>
//#include<fstream>
//
//using namespace std;
//void SetColor(int col)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
//}
//mutex m;
//long long x = 0;
//
//void foo1(int num)
//{
//	cout << this_thread::get_id() << endl;
//	//cout << "begin thread 1\n";
//	for (size_t i = 0; i < num; i++)
//	{
//		m.lock();
//		x++;
//		m.unlock();
//	}
//	//cout << "end thread 1\n";
//	//cout << endl;
//}
//
//void foo2(int num, char ch)
//{
//	cout<<this_thread::get_id()<<endl;
//	//cout << "begin thread 2\n";
//	for (size_t i = 0; i < num; i++)
//	{
//		m.lock();
//		x++;
//		m.unlock();
//	}
//	//cout << "end thread 2\n";
//	//cout << endl;
//}
//
//void ReadFileMy()
//{	
//	ifstream in("myFile.txt");
//	long long sum = 0;
//	int a = 0;
//	while (!in.eof())
//	{
//		char ch;
//		in.get(ch);
//		char buf[2];
//		buf[0] = ch;
//		buf[1] = '\0';		
//		a = atoi(buf);
//		//cout << a;
//		sum += a;
//	}
//	cout <<"sum = "<< sum;
//}
//
//void main()
//{
//	cout <<"main "<< this_thread::get_id() << endl;
//	//thread th1(foo1, 5000);
//	thread th2(foo2, 5000, '*');
//	////cout << "begin main\n";
//	///*for (size_t i = 0; i < 10; i++)
//	//{
//	//	cout << "-";
//	//}
//	//cout << "id " << th1.get_id();
//	//cout << "id " << th2.get_id();*/
//	//th1.join();
//	//th2.join();
//	//SetColor(5);
//	//cout << "x = " << x << endl;
//	//SetColor(7);
//	//_getch();
//	thread th(ReadFileMy);
//	cout << "end main\n";
//	for (size_t i = 0; i < 10000; i++)
//	{
//		cout << "-";
//	}
//	th.join();
//}