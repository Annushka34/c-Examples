//#include<iostream>
//#include<set>
//#include<ctime>
//#include<iomanip>
//#include<iterator>
//
//using namespace std;
//
//void main()
//{
//	srand(time(0));
//	multiset<int> s;
//	/*s.insert(10);
//	s.insert(10);
//	s.insert(10);
//	s.emplace(15);
//	s.emplace_hint(s.end(), 20);*/
//	cout << "try to insert:\n";
//	for (size_t i = 0; i < 20; i++)
//	{
//		int a = rand() % 10;
//		//---try to insert---
//		cout << setw(3) << a<<"  ";
//		auto it = s.emplace(a);
//		cout  << *it << endl;
//	}
//
//	
//	cout << "\nfinal set:\n";
//	cout << endl;
//	for (auto i = s.begin(); i != s.end(); i++)
//	{
//		cout << setw(3) << *i;
//	}
//	cout << endl;
//
//
//
//	for (size_t i = 0; i < 30; i++)
//	{
//		cout << i<<" - "<<s.count(i) << "\n";
//	}
//
//	
//
//	copy(s.begin(), s.end(), ostream_iterator<int>(cout, ","));
//
//	auto itlower_bound = s.lower_bound(5);
//	auto itupper_bound = s.upper_bound(5);
//	cout << "\nlower bound: " << *itlower_bound << endl;
//	cout << "upper bound: " << *itupper_bound << endl;
//
//
//	while (itlower_bound != itupper_bound)
//	{
//		cout << *itlower_bound << " ";
//		itlower_bound++;
//	}
//	cout << endl;
//
//	auto p = s.equal_range(5);
//
//	cout << endl;
//	if (p.first != p.second)
//	{
//		cout << *p.first << "   " << *p.second << endl;
//		for (auto  i = p.first; i!= p.second; i++)
//		{
//			cout << *i << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "No such number\n";
//	}
//
//	pair<set<int>::const_iterator, set<int>::const_iterator> ret;
//	ret = s.equal_range(30);
//	if (ret.first != ret.second)
//		cout << *ret.first << " " << *ret.second << endl;
//
//
//	set<int>::iterator f = s.find(5);
//	if (f != s.end())
//	{
//		cout << *f << endl;
//		for (auto i = s.begin(); i != f; i++)
//		{
//			cout << *i << ".";
//		}
//	}
//	/*
//
//	/*
//
//	auto comp=s.key_comp();
//	cout << endl;
//	cout <<boolalpha<< comp(*s.begin(), 10);
//	cout<<*s.lower_bound(10)<<endl;
//	cout << *s.upper_bound(10) << endl;*/
//	system("pause");
//}