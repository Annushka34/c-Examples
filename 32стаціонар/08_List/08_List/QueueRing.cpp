//#include<iostream>
//using namespace std;
//
//
//class MyQueue
//{
//private:
//	struct Node
//	{
//		int val;
//		Node* next;
//	};
//	//  -вказівник на перший елемент
//	Node * pHead;
//	Node * pTail;
//	int size;
//
//public:	
//	MyQueue()
//	{
//		pHead = nullptr;
//		pTail = nullptr;
//		size = 0;
//	}
//	bool Pop(int &val)
//	{
//		if (size == 0) return false;
//		Node* pDel = pHead;
//		val = pDel->val;
//		if (size > 1)
//		{
//			pHead = pHead->next;
//		}
//		Push(pDel->val);
//		delete pDel;
//		size--;
//		return true;
//	}
//	bool Push(int val)
//	{
//		Node * pNew = new Node();
//		pNew->next = nullptr;
//		pNew->val = val;
//		size++;
//		if (!pHead)
//		{
//			pHead = pNew;
//			pTail = pNew;
//			pTail->next = nullptr;
//			return true;
//		}
//		pTail->next = pNew;
//		pTail = pNew;
//		return true;
//	}
//	bool Clear()
//	{
//		if (size == 0) return false;
//		Node*pDel = pHead;
//		while (pHead != nullptr)
//		{
//			pDel = pHead;
//			pHead = pHead->next;
//			delete pDel;
//			size--;
//		}
//	}
//	bool Show()
//	{
//		cout << "\n--------------SHOW----------\n";
//		if (size == 0) return false;
//		Node*pCur = pHead;
//		while (pCur != nullptr)
//		{
//			cout << pCur->val << " ";
//			pCur = pCur->next;
//		}
//		cout << endl;
//	}
//};
//
//void main()
//{
//	MyQueue q;
//	q.Push(11);
//	q.Push(3);
//	q.Push(2);
//	q.Push(8);
//	//q.Clear();
//	q.Show();
//	int val;
//	q.Pop(val);
//
//	q.Show();
//
//	for (size_t i = 0; i < 7; i++)
//	{
//	if ( q.Pop(val) )
//		cout << val << " ";
//		else cout << "empty ";
//	}
//	cout << endl;
//}