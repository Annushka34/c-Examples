//#include<iostream>
//#include<map>
//#include<unordered_map>
//#include<string>
//#include<iomanip>
//
//using namespace std;
//
//template<typename T1, typename T2>
//ostream & operator << (ostream & out, const multimap<T1, T2> m)
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
//	multimap<string, string> m
//	{
//		{"pupkin","vasja"},
//		{"sidorov","misha"},
//		{"ivanov","kolja"},
//		{"vasiljev","ivan"},
//		{"lodochkin","petro"},
//		{"lodochkin","dima"},
//	};
//	cout << m;
//	m.insert(pair<string, string> {"lodochkin", "oleg"});
//	cout << m;
//
//
//	auto it = m.find("lodochkin");
//	if (it != m.end())
//	{
//		cout << (*it).second << endl;
//	}
//	cout << "\n-------------SEARCH ALL LODOCHKIN-------------------\n";
//	auto it2 = m.equal_range("lodochkin");
//	auto start = it2.first;
//	while (start != it2.second)
//	{
//		cout << (*start).first << "  " << (*start).second << endl;
//		start++;
//	}
//}