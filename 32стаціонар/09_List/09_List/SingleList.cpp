//#include<iostream>
//#include<list>
//using namespace std;
//
//
//class MyListSingle
//{
//private:
//	struct Node
//	{
//		Node * pNext;
//		int val;
//	};
//	Node * pHead ;
//	Node * pTail;
//	int size;
//
//public:
//	MyListSingle()
//	{
//		pHead = nullptr;
//		pTail = nullptr;
//		size = 0;
//	}
//	bool AddToHead(int val)
//	{
//		Node* pNew = new Node();
//		pNew->val = val;
//
//		if (!pHead)
//		{
//			pTail = pNew;
//		}
//		else
//		{
//			pNew->pNext = pHead;
//		}
//		pHead = pNew;
//		size++;
//		return true;
//	}
//	bool AddToTail(int val)
//	{
//		Node* pNew = new Node();
//		pNew->val = val;
//
//		if (!pHead)
//		{
//			pHead = pNew;
//		}
//		else
//		{
//			pTail->pNext = pNew;
//		}
//		pTail = pNew;
//		size++;
//		return true;
//	}
//	int RemoveFromHead()
//	{
//		if (!pHead) return 0;
//
//		Node * pDel = pHead;
//		int val = pDel->val;
//		if (size == 1)
//		{
//			delete pHead;
//			pHead = nullptr;
//			pTail = nullptr;
//		}
//		else
//		{
//			pHead = pHead->pNext;
//			delete pDel;
//		}
//		size--;
//		return val;
//	}
//	int RemoveFromTail()
//	{
//		if (!pHead) return 0;		
//		int val = pTail->val;
//		if (size == 1)
//		{
//			delete pHead;
//			pHead = nullptr;
//			pTail = nullptr;
//			return val;
//		}		
//		Node * pCur = pHead;
//		while (pCur->pNext != pTail)
//		{
//			pCur = pCur->pNext;
//		}
//		delete pTail;
//		pTail = pCur;
//		size--;
//		return val;
//	}
//
//	bool Clear()
//	{
//		while ( size )
//		{
//			RemoveFromHead();
//		}
//		return true;
//	}
//
//	void Show()
//	{
//		Node * pCur = pHead;
//		while (pCur)
//		{
//			cout << pCur->val << " ";
//			pCur = pCur->pNext;
//		}
//	}
//
//	int GetSize()
//	{
//		return size;
//	}
//};
//
//
//void main()
//{
//	MyListSingle list;
//	list.AddToHead(10);
//	list.AddToHead(3);
//	list.Show();
//	cout << endl;
//	list.Clear();
//	list.AddToTail(18);
//	list.AddToTail(5); 
//	list.AddToTail(7);
//	list.AddToHead(8);
//	list.Show();
//	cout << endl;
//	for (size_t i = 0; i < 10; i++)
//	{
//	cout << "from head: " << list.RemoveFromHead()<<endl;
//	cout << "from tail: " << list.RemoveFromTail() << endl;
//	}
//	list.Show();
//}