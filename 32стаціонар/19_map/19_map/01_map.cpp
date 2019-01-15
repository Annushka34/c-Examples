//#include<iostream>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//
//using namespace std;
//
//ostream & operator << (ostream & out, const map<int, string> m)
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
//	//---CREATE AND INITIALIZE---
//	map<int, string> m1({ {13,"Pupkin"} });
//	map<int, string> m2{
//		{10, "Petrov"},
//		{11, "Ivanov"}
//	};
//	pair<int, string> p{ 12, "Sidorov" };
//	map<int, string> m3(m2);
//	m3.insert(p);
//	m3.insert(pair<int, string>{15, "Vovochkin"});
//	m3.insert(make_pair(16, "AAAAA"));
//
//	m3[17] = "Pupkin2";
//
//
//	map<string, string> m;
//	m["fruit"] = "apple";
//	m["fruit"] = "banana";
//	string key, value;
//	cout << "Enter group name:";
//	cin >> key;
//	cout << "Enter value: ";
//	cin >> value;
//	m[key] = value;
//
//	m.insert(make_pair("vegitable", "potato"));
//
//	//---Map m3 <int, string>
//	for (auto el: m3)
//	{
//		cout << el.first << " " << el.second << endl;
//	}
//	cout << "\n---------------m---------------\n";
//	//---Map m <string, string>
//	for (auto el : m)
//	{
//		cout <<"key: "<<setw(10)<<left<< el.first << " value: " << el.second << endl;
//	}
//
//	map<int, string>::iterator it = m3.begin();
//	for (;it!=m3.end(); it++)
//	{
//		cout << (*it).first << " " << (*it).second << endl;
//	}
//	cout << "\n-----using ovveride cout for map---\n";
//	cout << m3;
//
//	cout << "\n-----using ovveride cout for pair---\n";
//	for(auto el: m)
//	{
//		cout << el;
//	}
//}