//#include <string>
//#include <iterator>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include<fstream>
//using namespace std;
//void ShowIter(vector<int> v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//}
//
//void main()
//{
//	vector<int> v = { 5, 5, 2,3,5,7 };
//	vector<string> v7(5, "aaa");
//	for (auto el : v)
//	{
//		cout << el;
//	}
//	cout << endl;
//	cout << v.back();
//	v.emplace(v.begin() + 2, 5);
//	v.insert(v.begin(), 3);
//	cout << endl;
//
//	//v.erase(v.begin()+1, v.begin() + 3);
//	v.erase(v.begin() + 3);
//	v.resize(1000);
//	cout << "max - " << v.max_size() << endl;
//	cout << v.size() << endl;
//
//	v.shrink_to_fit();
//	cout << v.size() << endl;
//	vector<int>::iterator it = v.begin();
//	v.insert(it + 1, 9);
//	cout << "capacity " << v.capacity();
//
//	v.reserve(100);
//	cout << "capacity " << v.capacity() << endl;
//	for (auto el : v)
//	{
//		cout << el;
//	}
//	v.clear();
//	cout << "capacity " << v.capacity() << endl;
//	v.shrink_to_fit();
//	cout << "capacity " << v.capacity() << endl;
//
//	vector<vector<int>> vec(10, vector<int>(6, 7));
//	cout << "vector vectoriv:\n";
//	vector<vector<string>> v1(3, vector<string>(5, "hello"));
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		for (size_t j = 0; j < v1[i].size(); j++)
//		{
//			cout << v1[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	vector<vector<string>> v2{ vector<string>{"black","white"}, vector<string>{"volvo"} , vector<string>(3,"c") };
//
//	vector<vector<string>>::iterator it3 = v2.begin();
//
//	(v2.at(1)).push_back("mersedes");
//	(*(v2.begin() + 1)).insert((*(v2.begin() + 1)).begin() + 1, "mazda");
//	for (; it3 < v2.end(); it3++)
//	{
//		//vector<string>::iterator it4 = (*it3).begin();
//		for (auto j = (*it3).begin(); j < (*it3).end(); j++)
//		{
//			cout << *j << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//}