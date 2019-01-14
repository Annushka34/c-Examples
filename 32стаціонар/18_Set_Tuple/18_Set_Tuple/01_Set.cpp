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
//	set<int> s;
//	/*s.insert(10);
//	s.emplace(15);
//	s.emplace_hint(s.end(), 20);*/
//
//	cout << "try to insert:\n";
//	for (size_t i = 0; i < 20; i++)
//	{
//		int a = rand() % 30;
//		//---try to insert---
//		cout << setw(3) << a;
//		auto it = s.emplace(a);
//		cout <<" "<<boolalpha << *it.first<<"  " << it.second << endl;
//	}
//	
//	cout << "\nfinal set:\n";
//	cout << endl;
//	for (auto i = s.begin(); i != s.end(); i++)
//	{
//		cout <<setw(3)<< *i;
//	}
//	cout << endl;
//
//
//
//	for (size_t i = 0; i < 30; i++)
//	{
//		if (s.count(i) == 1)cout<<setw(3) << i;
//		else cout << setw(3)<<"-";
//	}
//
//	s.erase(10);
//	s.insert({ 1,2,3 });
//
//	cout << endl;
//	cout << "try to emplace 25: ";
//	auto it = s.emplace(25);
//	cout << *it.first << " " << it.second << endl;
//	cout << "try to emplace 25: ";
//	it = s.emplace(25);
//	cout << *it.first << " " << it.second << endl;
//
//
//	//----point a position to insert element (minimize time)
//	s.emplace_hint(s.end(), 1);
//
//	copy(s.begin(), s.end(), ostream_iterator<int>(cout, ","));
//
//
//	cout << "\nlower bound: " << *s.lower_bound(20) << endl;
//	cout << "upper bound: " << *s.upper_bound(20) << endl;
//
//	auto p=s.equal_range(50);
//
//	cout << endl;
//	if(p.first!=p.second)
//	cout << *p.first << "   " << *p.second << endl;
//	else
//	{
//		cout << "No such number\n";
//	}
//
//	pair<set<int>::const_iterator, set<int>::const_iterator> ret;
//	ret = s.equal_range(30);
//	if(ret.first!=ret.second)
//	cout << *ret.first<<" "<<*ret.second<<endl;
//
//
//	set<int>::iterator f=s.find(5);
//	if (f != s.end()) 
//	{
//		cout << *f << endl;
//		for (auto i = s.begin(); i != f; i++)
//		{
//			cout << *i << ".";
//		}
//	}
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