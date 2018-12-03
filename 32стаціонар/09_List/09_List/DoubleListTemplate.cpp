#include<iostream>
#include<list>
using namespace std;

template <class T>
class MyDoubleList
{
private:
	struct Node
	{
		Node * pNext;
		Node * pPrev;
		T val;
	};
	Node * pHead;
	Node * pTail;
	int size;

public:
	MyDoubleList()
	{
		pHead = nullptr;
		pTail = nullptr;
		size = 0;
	}
	bool AddToHead(T val)
	{
		Node * pNew = new Node();
		pNew->pPrev = nullptr;
		pNew->val = val;

		if (!pHead)
		{
			pNew->pNext = nullptr;
			pTail = pNew;
		}
		else
		{
			pNew->pNext = pHead;
			pHead->pPrev = pNew;
		}
		pHead = pNew;
		size++;
		return true;
	}
	bool AddToTail(T val)
	{
		Node* pNew = new Node();
		pNew->val = val;
		pNew->pNext = nullptr;
		if (!pHead)
		{
			pNew->pNext = nullptr;
			pHead = pNew;
		}
		else
		{
			pTail->pNext = pNew;
			pNew->pPrev = pTail;
		}
		pTail = pNew;
		size++;
		return true;
	}

	T RemoveFromHead()
	{
		if (!pHead) return 0;
		int val = pHead->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node * pDel = pHead;
			pHead = pHead->pNext;
			pHead->pPrev = nullptr;
			delete pDel;
		}
		size--;
		return val;
	}
	T RemoveFromTail()
	{
		if (!pHead) return 0;
		int val = pTail->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node *pDel = pTail;
			pTail = pTail->pPrev;
			pTail->pNext = nullptr;
		}
		size--;
		return val;
	}


	bool AddByIndex(int ind, T val)
	{
		if (ind <= 0 || !pHead) return AddToHead(val);
		if (ind >= size) return AddToTail(val);
		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		Node *pNew = new Node();
		pNew->val = val;
		pNew->pNext = pCur;
		pNew->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pNew;
		pCur->pPrev = pNew;
		size++;
	}

	bool RemoveByIndex(int ind)
	{
		if (ind < 0 || ind >= size || !pHead)
			return false;
		if (size == 1)
		{
			return RemoveFromHead();
		}
		if (ind == 0) return RemoveFromHead();
		if (ind == size - 1) return RemoveFromTail();

		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		pCur->pNext->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pCur->pNext;
		int val = pCur->val;
		delete pCur;
		size--;
		return val;

	}
	bool Clear()
	{
		while (size)
		{
			RemoveFromHead();
		}
		return true;
	}

	void Show()
	{
		Node * pCur = pHead;
		while (pCur)
		{
			cout << pCur->val << " ";
			pCur = pCur->pNext;
		}
		cout << endl;
	}
	void ShowReverse()
	{
		Node * pCur = pTail;
		while (pCur)
		{
			cout << pCur->val << " ";
			pCur = pCur->pPrev;
		}
	}

	int GetSize()
	{
		return size;
	}
};


class Bus
{
	char name[50];
public:
	Bus()
	{
		strcpy_s(name, "new Bus");
	}
	Bus(const char *name)
	{
		strcpy_s(this->name, name);
	}
	friend ostream & operator << (ostream & out, Bus & b);

};
ostream & operator << (ostream & out, Bus & b)
{
	out << b.name << endl;
	return out;
}


void main()
{
	MyDoubleList<int> list;
	list.AddToHead(1);
	list.AddToHead(2);
	list.AddToHead(3);
	list.AddToTail(4);
	list.AddToTail(5);
	list.AddToTail(6);
	list.AddToTail(7);
	list.AddToTail(8);
	list.Show();
	list.AddByIndex(0, 100);
	list.AddByIndex(9, 112);
	list.AddByIndex(12, 99);
	list.Show();


	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);

	list.Show();
	cout << endl;
	cout << endl;
	cout << endl;
	list.ShowReverse();
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		cout << "from head: " << list.RemoveFromHead() << endl;
		cout << "from tail: " << list.RemoveFromTail() << endl;
	}
	list.Show();
	cout << endl;


	MyDoubleList <char> my2;
	my2.AddToHead('j');
	my2.AddToHead('d');
	my2.Show();


	MyDoubleList<Bus> my3;
	my3.AddToHead(Bus());
	my3.AddToHead(Bus("bus number3"));
	my3.AddToHead(Bus());
	my3.Show();
}