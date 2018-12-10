#include<iostream>
#include <future>
#include<thread>
#include<Windows.h>
#include<fstream>
using namespace std;
void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
mutex m;
long long x = 0;
int ReadFileMy()
{	
	ifstream in("myFile.txt");
	long long sum = 0;
	int a = 0;
	while (!in.eof())
	{
		char ch;
		in.get(ch);
		char buf[2];
		buf[0] = ch;
		buf[1] = '\0';		
		a = atoi(buf);
		//cout << a;
		sum += a;
	}
	return sum;	
}

void main()
{
	future<int> fut = async (ReadFileMy);
	for (size_t i = 0; i < 10000; i++)
	{
		cout << "*";
	}
	int res = fut.get();
	cout << res << endl;
	for (size_t i = 0; i < 100; i++)
	{
		cout << "-";
	}
}