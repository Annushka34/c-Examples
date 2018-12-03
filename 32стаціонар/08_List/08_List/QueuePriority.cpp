#include<iostream>
using namespace std;


class MyQueue
{
private:
	struct Node
	{
		char val;
		int prior;
		Node* next;
	};
	//  -вказівник на перший елемент
	Node * pHead;
	Node * pTail;
	int size;

public:	
	MyQueue()
	{
		pHead = nullptr;
		pTail = nullptr;
		size = 0;
	}
	bool Pop(char& val, int& prior)
	{
		if (size == 0) return false;
		Node* pDel = pHead;
		val = pDel->val;
		prior = pDel->prior;
		if (size > 1)
		{
			pHead = pHead->next;
		}
		delete pDel;
		size--;
		return true;
	}
	bool Push(char val, int prior)
	{
		Node * pNew = new Node();
		pNew->next = nullptr;
		pNew->val = val;
		pNew->prior = prior;
		size++;
		if (!pHead)
		{
			pHead = pNew;
			pTail = pNew;
			pTail->next = nullptr;
			return true;
		}
		if ( prior > pHead->prior )
		{
			pNew->next = pHead;
			pHead = pNew;
			return true;
		}
		Node* pCur = pHead;
		while (pCur->next != nullptr)
		{
			if (prior < pCur->next->prior)
			{
				pCur = pCur->next;
			}
			else
				break;
		}
		pNew->next = pCur->next;
		pCur->next = pNew;
		return true;
	}
	bool Clear()
	{
		if (size == 0) return false;
		Node*pDel = pHead;
		while (pHead != nullptr)
		{
			pDel = pHead;
			pHead = pHead->next;
			delete pDel;
			size--;
		}
	}
	bool Show()
	{
		cout << "\n--------------SHOW----------\n";
		if (size == 0) return false;
		Node*pCur = pHead;
		while (pCur != nullptr)
		{
			cout << pCur->val << " "<<pCur->prior<<endl;
			pCur = pCur->next;
		}
		cout << endl;
	}
	~MyQueue()
	{
		if (pHead)
			Clear();
	}
};

void main()
{
	MyQueue q;
	q.Push('a', 22);
	q.Push('v',3);
	q.Push('w',12);
	q.Push('w', 15);
	q.Push('w', 25);
	q.Push('w', 5);
	q.Push('u',8);
	q.Show();
	int prior;
	char val;
	q.Pop(val, prior);

	//q.Clear();

	for (size_t i = 0; i < 7; i++)
	{
	if (q.Pop(val, prior) )
		cout << val << " " << prior << endl;
		else cout << "empty ";
	}
	cout << endl;
}