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
//class RatedPlayer : public TableTennisPlayer
//{
//private:
//	unsigned int rating;
//public:
//	RatedPlayer(unsigned int r = 0, string fn = "none", string ln = "none", bool ht = false) :rating(r),
//		TableTennisPlayer(fn, ln, ht) {}
//	RatedPlayer(unsigned int r, const TableTennisPlayer&tp) :rating(r), TableTennisPlayer(tp) {}
//	unsigned int Rating() const { return rating; }
//	void ResetRating(unsigned int r) { rating = r; }
//};
//
//
//void Show(TableTennisPlayer&rt)
//{
//	cout << "Name ";
//	rt.Name();
//	if (rt.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//
//}
//void main()
//{
//	TableTennisPlayer player1("Serg", "Ivanov", false);//basse class
//	RatedPlayer rplayer1(110, "Petro", "Petrov", true);//derived class
//
//	player1.Name();
//	if (player1.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//
//	rplayer1.Name();
//	if (rplayer1.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//
//	cout << "rating " << rplayer1.Rating() << endl;
//
//	RatedPlayer rplayer2(120, player1);
//	rplayer2.Name();
//	if (rplayer2.HasTable())
//		cout << "Has table\n";
//	else cout << "Has not table\n";
//
//	cout << "rating " << rplayer2.Rating() << endl;
//
//	
//
//	cout << "using links and pointers\n";
//	TableTennisPlayer &rt = rplayer1;
//	TableTennisPlayer*pt = &rplayer1;
//	rt.Name();
//	pt->Name();
//
//	cout << "using methd Show\n";
//	Show(rt);
//	Show(rplayer1);
//	Show(player1);
//	//RatedPlayer &rt1 = player1;не дозволяється
//
//	cout << "using constructor copy\n";
//	TableTennisPlayer tp1(rplayer1);//ініціалізація через конструктор копіювання неявний
//	tp1.Name();
//
//	TableTennisPlayer tp = rplayer1;
//	tp = rplayer2;
//}