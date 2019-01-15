//#include<iostream>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//
//using namespace std;
//
//template<typename T1, typename T2>
//ostream & operator << (ostream & out, const map<T1, T2> m)
//{
//	for (auto el : m)
//	{
//		out << "key: " << setw(10) << left << el.first << " value: " << el.second << endl;
//	}
//	return out;
//}
//
//ostream & operator << (ostream & out, const pair<string, string> el)
//{
//	return	out << "key: " << setw(10) << left << el.first << " value: " << el.second << endl;
//}
//
//void main()
//{
//	map<string, string> m
//	{
//		{"pupkin","vasja"},
//		{"sidorov","misha"},
//		{"ivanov","kolja"},
//		{"vasiljev","ivan"},
//		{"lodochkin","petro"},
//	};
//	cout << m;
//
//	cout<<m.at("pupkin")<<endl;
//	m.at("pupkin") = "olga";
//	cout << m.at("pupkin")<<endl;
//	try
//	{
//		cout << m.at("pupkin2");
//	}
//	catch(...)
//	{ }
//	//-----dont make mistake if not find, but create empty value with such key----
//	//cout << m["pupkin2"] << endl;
//
//
//	auto f = m.find("pupkin");
//	cout <<"find pupkin "<< (*f).second << endl;
//
//	auto f1 = m.find("ivanov");
//	//---mistake if not found---
//	if(f1!=m.end())
//	cout << "find ivanov " << (*f1).second << endl;
//	else cout << "not found\n";
//
//	cout << "\nlower bound\n";
//	map<string, string>::iterator itLB =  m.lower_bound("vasiljev");
//	if (itLB != m.end())
//	cout << (*itLB).first << "  " << (*itLB).second << endl;
//	cout << "\nupper bound\n";
//	itLB = m.upper_bound("vasiljev");
//	if(itLB!=m.end())
//	cout << (*itLB).first << "  " << (*itLB).second << endl;
//
//
//	cout << "\n********************equal range*************************\n";
//	pair<map<string, string>::const_iterator, map<string, string>::const_iterator> p = m.equal_range("ivanov2");
//	if (p.first != p.second)
//	{
//		//---with check if not found---
//	}
//	//----first - lower bound, second - upper bound----
//	for (auto it1 = p.first; it1 != p.second; it1++)
//	{
//		cout << (*it1).first << " " << (*it1).second << endl;
//	}
//
//	cout<<m.count("ivanov2") << endl;
//
//	auto it5 = m.erase("ivanov");
//	cout << "after eraze: \n";
//	cout << m;
//	cout << boolalpha<<it5<<endl;
//	it5 = m.erase("ivanov");
//	cout << "after eraze: \n";
//	cout << m;
//	cout << boolalpha << it5 << endl;
//
//	auto it6 = m.begin();
//	it6 ++;
//	m.erase(it6, m.end());
//	cout << m;
//
//	cout << m.size() << endl;
//}