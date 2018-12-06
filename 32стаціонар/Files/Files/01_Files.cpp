//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//void main()
//{
//	string filename1 = "file_1.txt";
//	string filename2 = "file_2.dat";
//	//ofstream out(filename2, ios_base::binary);
//	//int arr[10] = { 2,5,7,4,1,2,3,5,6,8 };
//	////out.write((char*)arr, sizeof(arr));
//	//out.write((char*)arr, 40);
//	//out.close();
//
//	//ifstream in(filename2, ios_base::binary);
//	//if (!in.is_open())
//	//{
//	//	cout << "Error\n";
//	//	return;
//	//}
//	//int arr2[10];
//	////out.write((char*)arr, sizeof(arr));
//	//in.read((char*)arr2, 40);
//	//for (size_t i = 0; i < 10; i++)
//	//{
//	//	cout << arr2[i] << " ";
//	//}
//	//cout << endl;
//	//in.close();
//
//	//----завждидописуэ в кінець або перезатирає
//	//ofstream out(filename1);
//	//if (!out.is_open())
//	//{
//	//	cout << "Error\n";
//	//	return;
//	//}
//	//out.write("dkkfsdhfg", 10);
//	//out.write("aaaaaaaaaa", 10);
//	//out.write("ddddddd", 10);
//	//out.seekp(SEEK_SET, 2);
//	//out << "a";
//	//out.close();
//
//
//	//fstream out(filename1, ios_base::trunc);
//	//if (!out.is_open())
//	//{
//	//	cout << "Error\n";
//	//	return;
//	//}
//	//out.write("bbbbbbbb", 10);
//	//out.write("aaaaaaaaaa", 10);
//	//out.write("ddddddd", 10);
//	//out.seekp(SEEK_SET, 2);
//	//out.write("***", 3);
//	//out.close();
//
//	//ifstream in(filename1);
//	//char buf[100];
//
//	//while (!in.eof())
//	//{
//	//	in.read(buf, 100);
//	//	cout << buf << endl;
//	//	char ch = in.peek();
//	//	if (in.eof())break;
//	//	if (ch == ' ')
//	//	{
//	//		in.seekg(SEEK_CUR, 1);
//	//	}
//	//}
//	//in.close();
//
//
//	/*	ofstream out(filename1);
//	if (!out.is_open())
//	{
//		cout << "Error\n";
//		return;
//	}
//	out << "1 8 Ivanov ";
//	out << "2 8 Petrov ";
//	out << "3 9 Sidorov ";
//	out << "4 7 SSSSS ";
//	out << "5 7 JJJJJ ";
//	out.close();*/
//
//	ifstream in(filename1);
//char buf[100];
//
//int pos;
//cin >> pos;
//
//while (!in.eof())
//{
//	in >> buf;
//	if (pos == atoi(buf))
//	{
//		in.seekg(1, ios::cur);
//		in >> buf;
//		in >> buf;
//		cout << buf;
//		break;
//	}
//	in >> buf;
//	int len = atoi(buf);
//	in.seekg(len-1, ios::cur);
//}
//in.close();
//}