#include<iostream>
#include<tuple>
#include<string>

using namespace std;

void main()
{
	tuple<int, string, string> t(1, "jhg", "hg");
	tuple<int, string, string,int> t1(1, "jhg", "hg",7);
	tuple<int, int, int, int> t2(1, 2, 5, 7);
	//---size----
	cout << tuple_size< tuple<int, string, string>>::value << endl;
	//---get elements-----
	cout << get<1>(t1) << endl;
	const int ind = 1;
	cout << get<ind>(t1) << endl;
	//cout<<get<0>(t);



	t = make_tuple(5, "lol", "hh");
	cout << get<0>(t)<<endl;
	get<0>(t) = 115;
	cout << get<0>(t) << endl;


	int size = tuple_size<tuple<int, string, string> >::value;
	//const int ind = 2;
	cout<< (get<ind>(t));
	////---cant do this!
	///*for (int i = 0; i < size; i++)
	//{
	//	cout << (get<i>(t)) << " ";
	//}*/

	//---reverse from tuple to vars

	int _one;
	string _two, _three;
	tie(_one, _two, _three) = t;
	cout << _three << endl;
	system("pause");
}