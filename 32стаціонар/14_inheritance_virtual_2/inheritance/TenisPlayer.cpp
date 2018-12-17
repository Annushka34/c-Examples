//#include<iostream>
//#include<string>
//using namespace std;
//
//class TableTennisPlayer
//{
//private:
//	string firstname;
//	string lastname;
//	bool hasTable;
//public:
//	TableTennisPlayer(string fn = "none", string ln = "none", bool ht = false) : firstname(fn), lastname(ln), hasTable(ht) {}
//	
//	void Name() const;
//	bool HasTable() const { return hasTable; };
//	void ResetTable(bool v) { hasTable = v; };
//};
//
//void TableTennisPlayer::Name()const
//{
//	cout << lastname << "  " << firstname << endl;
//}
//
//void main()
//{
//	TableTennisPlayer player1("Serg", "Ivanov", true);
//	TableTennisPlayer player2("Petro", "Stepanov", false);
//
//	player1.Name();
//	if (player1.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//	
//	player2.Name();
//	if (player2.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//
//}