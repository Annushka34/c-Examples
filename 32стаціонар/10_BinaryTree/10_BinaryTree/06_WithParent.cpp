//#include <iostream>
//using namespace std;
//class BinaryTree
//{
//	struct  Node
//	{
//		int key;
//		int val;
//		Node * parent;
//		Node * left;
//		Node * right;
//	};
//	Node * root;
//
//	void ShowNode(Node * cur)
//	{
//		if (cur->left)
//		{
//			ShowNode(cur->left);
//		}
//		cout << cur->key << " " << cur->val << endl;
//		if (cur->right)
//		{
//			ShowNode(cur->right);
//		}
//	}
//	void DelNode(Node *& cur)
//	{
//		if (cur->left)
//		{
//			DelNode(cur->left);
//		}
//		if (cur->right)
//		{
//			DelNode(cur->right);
//		}
//		delete cur;
//		cur = nullptr;
//	}
//	Node * Search(Node * cur, int key)
//	{
//		if (cur == nullptr || cur->key == key)
//			return cur;
//		Node * pFind = nullptr;
//		if (key < cur->key)
//		{
//			pFind = Search(cur->left, key);
//		}
//		if (pFind) return pFind;
//		if (key > cur->key)
//		{
//			pFind = Search(cur->right, key);
//		}
//		if (pFind) return pFind;
//		return nullptr;
//	}
//
//	Node * SearchByVal(Node * cur, int val)
//	{
//		if (cur == nullptr || cur->val == val)
//			return cur;
//		Node * pFind = nullptr;
//			pFind = SearchByVal(cur->left, val);
//		if (pFind) return pFind;
//			pFind = SearchByVal(cur->right, val);
//		if (pFind) return pFind;
//		return nullptr;
//	}
//public:
//	BinaryTree()
//	{
//		root = nullptr;
//	}
//	void Add(int key, int val)
//	{
//		Node * pNew = new Node();
//		pNew->key = key;
//		pNew->val = val;
//		pNew->parent = pNew->right = pNew->left = nullptr;
//		if (!root)
//		{
//			root = pNew;
//			return;
//		}
//		Node* cur = root;
//		while (cur)
//		{
//			if (key == cur->key)
//			{
//				delete pNew;
//				cur->val = val;
//				return;
//			}
//			if (key < cur->key)
//			{
//				if (cur->left == nullptr)
//				{
//					pNew->parent = cur;
//					cur->left = pNew;
//					return;
//				}
//				cur = cur->left;
//			}
//			if (key > cur->key)
//			{
//				if (cur->right == nullptr)
//				{
//					pNew->parent = cur;
//					cur->right = pNew;
//					return;
//				}
//				cur = cur->right;
//			}
//		}
//	}
//	void SearchForMain(int key)
//	{
//		cout << "\n-----SEARCH " << key << "-----------\n";
//		if (!root) return;
//		Node * pFind = Search(root, key);
//		if (pFind)
//			cout << pFind->key << " " << pFind->val << endl;
//		else
//			cout << "no such element\n";
//	}
//
//
//	void SearchForMainByVal(int val)
//	{
//		cout << "\n-----SEARCH " << val << "-----------\n";
//		if (!root) return;
//		Node * pFind = SearchByVal(root, val);
//		if (pFind)
//			cout << pFind->key << " " << pFind->val << endl;
//		else
//			cout << "no such element\n";
//	}
//	void ShowTree()
//	{
//		cout << "-------SHOW--------------\n";
//		if (!root) return;
//		ShowNode(root);
//	}	
//	void DelTree()
//	{
//		if (!root) return;
//		DelNode(root);
//	}
//	void DelTree(Node *& del)
//	{
//		if (!del) return;
//		DelNode(del);
//	}
//	void Copy(Node* cur)
//	{
//		if (!cur)return;
//		Add(cur->key, cur->val);
//
//		if (cur->left)
//		{
//			Copy(cur->left);
//		}
//		if (cur->right)
//		{
//			Copy(cur->right);
//		}
//	}
//
//	void DelNode(int key)
//	{
//		if ( !root ) return;
//		Node *pDel = Search(root, key);
//		if (!pDel) return;
//		Node* parent = pDel->parent;
//		if (parent)
//		{
//			if (parent->left == pDel)
//			{
//				parent->left = nullptr;
//			}
//			if (parent->right == pDel)
//			{
//				parent->right = nullptr;
//			}
//		}
//		else root = nullptr;
//		Copy(pDel->left);
//		Copy(pDel->right);
//		DelTree(pDel);
//		return;
//	}	
//};
//
//
//void main()
//{
//	BinaryTree bt;
//	bt.Add(10, 13697);
//	bt.Add(12, 12545);
//	bt.Add(17, 22222);
//	bt.Add(22, 55555);
//	bt.Add(18, 14789);
//	bt.Add(9, 12345);
//	bt.Add(13, 11111);
//	bt.Add(3, 20035);
//	bt.ShowTree();
//	/*bt.DelNode(10);
//	bt.DelNode(12);
//	bt.DelNode(12);
//	bt.ShowTree();*/
//	bt.SearchForMain(100);
//	bt.SearchForMainByVal(13697);
//	bt.SearchForMainByVal(12545);
//	bt.SearchForMainByVal(22222);
//	bt.SearchForMainByVal(55555);
//}