#include<iostream>
#include<fstream>
#include<string>
#include<assert.h>

using namespace std;


class MyExeption : public exception
{
	const char * message = nullptr;
	char logFile[10];
	int _line = -1;
public:
	MyExeption(const char*mess)
	{
		strcpy_s(logFile,  "logs.txt");
		message = mess;
	}
	MyExeption(int line, const char  * mess)
	{
		strcpy_s(logFile, "logs.txt");
		message = mess;
		_line = line;
	}
	virtual const char* what() const throw() override
	{
		ofstream out(logFile, ios_base::app);
		out << "developed by Ann" << __DATE__<<__TIME__;
		out << message;
		out <<"line: "<< _line<<"\n";
		out.close();
		return "I catch exception in your code!!!:))";
	}
};

void Foo()
{
	/*ifstream data;
	data.open("newFile.txt");
	if (data.fail() || !data.is_open())
	{
		throw exception();
	}*/

	try
	{
		int b;
		cin >> b;
		if (b == 0) throw MyExeption(42, "b==0");

		int *arr = new int[b];
	
		cout << "rez: " << (b);
	}
	catch (MyExeption & ex)
	{
		cout<<ex.what();
		throw exception("function Foo()");
	}
}


template<class T>
void MyFunc(T arg)
{
	static_assert(is_integral<T>::value, "not integral");
	cout << arg * arg;
}

void MyFooL(void(*ptr)(int), int a)
{
	ptr(a);
}

template<class T>
void MyFooL2(T ptr, int a)
{
	ptr(a);
}
void main()
{
	/*try
	{
		Foo();
	}
	catch (exception & ex)
	{
		MyExeption my(65, ex.what());
		my.what();
	}*/
		int size;
		cin >> size;
		/*assert(size > 0);
		const int a = 5;
		static_assert(a == 5, "a != 5");
		MyFunc(5);*/

		void(*ptr)();
		ptr = Foo;
		ptr();
		ptr =  []() {cout << "hello"; };
		ptr();

		auto ptr1 = [size](int a) {cout << size<<" "<<a<<endl; };
		ptr1(10);

		auto ptr2 = [](int a) {cout <<"its work: "<< a << endl; };
		MyFooL(ptr2, 15);

		MyFooL([](int a) {cout << "so cool))): " << a * a << endl; }, 33);

		auto ptr4 = [](int a, int b)-> int {return a + b; };
		//--bad---
		auto ptr3 = [](int *arr, int size) -> int { int sum = 0;
			for (size_t i = 0; i < size; i++)
			{
				sum += arr[i];
			} 
			return sum; };
		int arr[] = { 1,2,3,4,5 };
		cout<<ptr3(arr, 5);
	cout << "continue";
}