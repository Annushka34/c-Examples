//#include<iostream>
//using namespace std;
//
//
//class MyStack
//{
//private:
//	struct Node
//	{
//		int val;
//		Node* next;
//	};
//	//  -вказівник на перший елемент
//	Node * pHead = nullptr;
//	int size = 0;
//
//public:
//	bool Pop(int &val)
//	{
//		if ( size== 0) return false;
//
//		Node* pDel = pHead;
//		val = pDel->val;
//		if (size > 1)
//		{
//			pHead = pHead->next;
//		}
//		delete pDel;
//		size--;
//		return true;
//	}
//	bool Push(int val)
//	{
//		Node* pNew = new Node();
//		pNew->val = val;
//
//		if (!pHead)
//		{
//			//pNew->next = nullptr;
//			pHead = pNew;
//		}
//		else
//		{
//			pNew->next = pHead;
//			pHead = pNew;
//		}
//		size++;
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
//	MyStack st;
//	st.Push(11);
//	st.Push(3);
//	st.Push(8);
//	st.Clear();
//	int a;
//	st.Show();
//
//	for (size_t i = 0; i < 5; i++)
//	{
//		if (st.Pop(a))
//			cout << a << endl;
//		else
//			cout << "STACK IS EMPTY";
//
//	}
//
//	st.Show();
//}