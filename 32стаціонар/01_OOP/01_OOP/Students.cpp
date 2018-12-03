#include<iostream>

using namespace std;

class Sentense
{
private:
	const int MAX_SIZE = 250;
	char *words;
	char userName[50];
public:
	Sentense()
	{
		//cout << "Simple costr\n";
		words = new char[MAX_SIZE];
		strcpy_s(userName, "No name");
		strcpy_s(words, strlen(userName)+1, userName);
		strcat_s(words, strlen(words)+3, ": \0");
	}
	Sentense(const char* userName)
	{
		//cout << "Simple costr + name\n";
		words = new char[MAX_SIZE];
		strcpy_s(this->userName, userName);
		strcpy_s(words, strlen(userName) + 1, userName);
		strcat_s(words, strlen(words) + 3, ": \0");
	}

	Sentense(const Sentense & s)
	{
		//cout << "Constr copy\n";
		strcpy_s(this->userName, s.userName);
		this->words = new char[this->MAX_SIZE];
		strcpy_s(this->words, strlen(s.words)+1,  s.words);
	}
	char* GetWords()
	{
		return words;
	}
	void SetWords()
	{
		cout << "Enter word: ";
		char buffer[50];
		cin >> buffer;
		strcat_s(words, strlen(words)+strlen(buffer)+1, buffer);
	}
	void SetWords(const char *newWord)
	{		
		strcat_s(words, strlen(words) + strlen(newWord) + 1, newWord);
	}

	~Sentense()
	{
		//cout << "Destr\n";
		//if (words) {
			delete words;
		//}
	}
	//void Show(int b, int a = 8, int age = 18)
	//{
	//	cout << "Hello "<<a<< age<<endl;
	//}

	Sentense& operator= (const Sentense & obj)
	{
		cout << "=\n";
		delete[]this->words;
		words = new char[MAX_SIZE];
		strcpy_s(this->userName, obj.userName);
		this->words = new char[this->MAX_SIZE];
		strcpy_s(this->words, strlen(obj.words) + 1, obj.words);
		return  *this;
	}

	Sentense  operator+ (const Sentense & obj) const
	{
		cout << "+\n";
		Sentense sNew;
		strcpy_s(sNew.userName, obj.userName);
		strcat_s(sNew.userName, this->userName);

		sNew.words = new char[this->MAX_SIZE];
		int len = strlen(this->words) + strlen(obj.words) + 1;
		if (len > MAX_SIZE)
		{
			cout << "can't add objects\n";
			return sNew;
		}
		strcpy_s(sNew.words, strlen(obj.words) + 1, obj.words);
		strcat_s(sNew.words, len, this->words);
		return  sNew;
	}
	char operator [](int ind)
	{
		if (ind >= strlen(words) || ind < 0)
		{
			cout << "no such index\n";
			return -1;
		}
		return words[ind];
	}

	friend bool operator > (const Sentense &s1, const Sentense &s2);
	friend bool operator == (const Sentense &s1, const Sentense &s2);
	friend istream & operator >> (istream &in, const Sentense & s);

	friend ostream & operator << (ostream &out, const Sentense & s);
	friend bool operator < (const Sentense &s1, const Sentense &s2);
};
bool operator == (const Sentense &s1, const Sentense &s2)
{
	return !strcmp(s1.words, s2.words);
}
bool operator > (const Sentense &s1,const Sentense &s2)
{
	return strcmp(s1.words, s2.words) < 0;
}
bool operator < (const Sentense &s1, const Sentense &s2)
{
	return !( s1 > s2 ) && !( s1 == s2 );
}



ostream & operator << (ostream &out, const Sentense & s)
{
	out << s.userName << " " << s.words << endl;
	return out;
}

istream & operator >> (istream &in, const Sentense & s)
{	
	in >> s.words;
	return in;
}

void AddAndShow(Sentense s)
{
	s.SetWords();
	cout << s.GetWords();
}


void main()
{
	Sentense s("Vasja");
	cin >> s;
	/*s.SetWords();
	AddAndShow(s);
	AddAndShow(s);*/

	Sentense s1("Olga");
	cin >> s1;
	cout << "Equal? ";
	cout << boolalpha << (s1 == s) <<endl;
	cout << "First Less? ";
	cout << boolalpha << (s1 < s) << endl;
	cout << "Second less? ";
	cout << boolalpha << (s1 > s) << endl;
	/*Sentense s2 = s1;
	Sentense s3;
	s3 = s2;
	cout<<endl<<s3.GetWords();*/
	//Sentense s5 = (s1 + s);
	/*cout<<s[2];
	cout << s;
	cin >> s;*/

	//cout << s5;
	cout << endl;
	int ind;
	cin >> ind;
	cout << s[ind];
}