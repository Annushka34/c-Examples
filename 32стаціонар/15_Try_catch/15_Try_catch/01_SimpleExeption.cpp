//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//void Foo()
//{
//	ifstream data;
//	char filename[50];
//	cout << "file to open> ";
//	cin.getline(filename, 50); data.open(filename);
//	if (data.fail())
//	{
//		switch (errno)
//		{
//		case EACCES:
//			// this is set if the drive is not ready in DOS 
//			cout << "Drive not ready or permission denied" << endl;
//			break;
//		case ENOENT:
//			cout << "Could not find this file" << endl;
//			break;
//		default:
//			perror("opening data file");
//		}
//		exit(EXIT_FAILURE);
//	}
//}
//
//void Foo1()
//{
//	int size = -5;
//	try
//	{
//		int * arr = new int[size];
//	}
//	catch (...)
//	{
//		throw "arr not created\n Foo1 line 35 size can't by less then 0\n";
//	}
//	cout << "create arr\n";
//}
//
//void main()
//{
//	int size = 0;
//	cin >> size;
//	try
//	{
//		if (size == 0)
//			//throw "size can't 0\n   line 11\n";
//			//throw size;
//		int b = 10 / size;
//		//cout << "rezult = " << b << endl;
//	}
//	catch (int e)
//	{
//		cout << "Exeption in size = ";
//		cout << e;
//	}
//	catch (const char * ex)
//	{
//		cout << ex;
//	}
//	catch (...)
//	{
//		cout << "Exeption\n";
//	}
//	cout << "continue....";
//
//	try
//	{
//		int * arr = new int[size];
//		delete arr;
//	}
//	catch(...)
//	{
//		cout << "Exeption in memmory allocate. Line 34\n";
//	}
//
//	cout << "Very important code\n";
//	try
//	{
//		Foo1();
//	}
//	catch (const char * ex)
//	{
//		cout << ex << endl;
//	}
//	cout << "Very important code 2\n";
//}