#include<iostream>
#include<array>
#include<string>
#include<algorithm>
#include<fstream>

using namespace std;

void main()
{
	array<int, 6> arr;
	array<string, 3> arrStr = { {"serg","nikolay","vasilij"} };
	array<int, 6> arrInt2 { 2,5,8, 13, 4, 1 };//---initialize list
	arr = arrInt2;
	//---fill all elements with number 3
	arr.fill(3);

	arr[2] = 13;
	cout << arr.at(1) << endl;
	//---change arr element with arrInt2 elements
	arr.swap(arrInt2);
	
	cout << "arrInt2\n";
	for (size_t i = 0; i < arrInt2.size(); i++)
	{
		cout << arrInt2.at(i)<<" ";
	}
	cout << endl;
	cout << "arr\n";

	for (auto el: arr)
	{
		cout << el << " ";
	}
	cout << endl;

	//------iterator-----

	array<int, 6>::iterator it = arr.begin();
	auto it1 = arr.begin();

	cout << (*it) << endl;
	it++;
	cout << (*it) << endl;
	cout << (*(it + 1)) << endl;
	cout << endl;
	
	*it = 100;

	while (it!= arr.end())
	{
		cout << (*it++)<<" ";
	}

	//---reverse iterator for go from end to begin
	array<string, 3>::reverse_iterator itS = arrStr.rbegin();
	while (itS != arrStr.rend())
	{
		cout << (*itS++) << " ";
	}
	cout << endl;


	itS = arrStr.rbegin();
	while (itS != arrStr.rend())
	{
		cout << (*itS++) << " ";
	}
	cout << endl;


	for (auto it = arrStr.begin(); it!=arrStr.end(); it++)
	{
		cout << (*it)<<" ";
	}
	cout << endl;
	int i = 0;
	/*for (array<string, 3>::iterator it = arrStr.begin(); it != arrStr.end(); i++)
	{
		cout << (*(it+i)) << " ";
	}*/

	it = arr.begin();
	while (it != arr.end())
	{
		cout << (*it++) << " ";
	}
	cout << endl;
	//---algorithm---
	cout << "\n------------------ SORT arr---------------------------\n";
	sort(arr.begin(), arr.end());
	it = arr.begin();
	while (it != arr.end())
	{
		cout << (*it++) << " ";
	}

	cout << "\n------------------ COPY FROM arr TO newArr---------------------------\n";
	array<int, 10> newArr{5,5,5,5,5};
	copy(arr.begin()+1, arr.end(), newArr.begin()+5);//---algorithm copy
	for (auto el: newArr)
	{
		cout << el << " ";
	}


	cout << "\n--------------ITERATOR WICH MAKE COUT-------------------------------\n";
	//----stream iterators---
	ostream_iterator<int> it6 = ostream_iterator<int>(cout, " ");
	copy(newArr.begin()+2, newArr.end(), it6);//---algorithm copy, it6 - destination
	cout << endl;
	copy(arrStr.begin(), arrStr.end(), ostream_iterator<string>(cout, " --- "));

	cout << "\n-------------------WRITE TO FILE--------------------------\n";
	//---stream iterators write to file
	//ofstream out("myFile.txt", ios_base::app);
	//ostream_iterator<string> it7 = ostream_iterator<string>(out, " ");
	//copy(arrStr.begin(), arrStr.end(), it7);
	//copy(arrStr.begin(), arrStr.end(), ostream_iterator<string>(out, " "));

	//out.close();


	///---read from file----
	cout << "\n-------------------READ FROM FILE--------------------------\n";
	ifstream in("myFile.txt");
	array<string, 6> newArrStr;
	istream_iterator<string> itBeg(in);
	istream_iterator<string> itEnd;
	copy(itBeg, itEnd, newArrStr.begin());
	copy(newArrStr.begin(), newArrStr.end(), ostream_iterator<string>(cout, " "));
	in.close();
	cout << newArrStr.size() << endl;
}

