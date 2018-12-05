//#include<iostream>
//#include<string>
//#include<Windows.h>
//
//using namespace std;
//
//struct Node
//{
//	int key;
//	string val;
//	Node* left;
//	Node* right;
//};
//class BinaryTree
//{
//public:
//	void AddToTree(Node*&root, int key, string val)
//	{
//		if (!root)
//		{
//			root = new Node();
//			root->key = key;
//			root->val = val;
//			root->left = nullptr;
//			root->right = nullptr;
//		}
//		else if ( key > root->key) { AddToTree(root->right, key, val); }
//		else if ( key < root->key) { AddToTree(root->left, key, val); }
//		else if ( key == root->key)
//		{ 
//			root->val = val;
//			return;
//		}
//	}
//	void Show(Node* root)
//	{
//		if (!root) return;
//		if (root->left) { Show(root->left); }
//		cout <<root->key<<" : "<< root->val << "\n";
//		if (root->right) { Show(root->right); }
//	}
//	void Delete(Node*& root)
//	{
//		if (root->left) { Delete(root->left); }
//		if (root->right) { Delete(root->right); }
//		delete root;
//		root = nullptr;
//	}
//	void Search(Node* root, int key)
//	{
//		if (root == nullptr)
//		{
//			cout << "No such value\n";
//			return;
//		}
//		if (root->key == key)
//		{
//			cout << "I find you!!!!" << root->val <<"\n";
//			return;
//		}
//		if (key < root->key)
//		{
//			Search(root->left, key);
//		}
//		if (key > root->key)
//		{
//			Search(root->right, key);
//		}
//	}
//
//	Node* FindMin(Node * root)
//	{
//		if (!root->left) return root;
//		FindMin(root->left);
//	}
//
//	void DelByKey(Node *& root, int key)
//	{
//		if ( root == nullptr ) { cout << " Меня тут нет))) \n"; return; }
//		if (key < root->key) DelByKey(root->left, key);
//		if (key > root->key) DelByKey(root->right, key);
//		if (root->key == key) 
//		{
//			if ( !root->left && !root->right )
//			{
//				delete root;
//				root = nullptr;
//				return;
//			}
//			else if ( !root->left )
//			{
//				Node * del = root;
//				root = root->right;
//				delete del;
//				return;
//			}
//			else if ( !root->right )
//			{
//				Node * del = root;
//				root = root->left;
//				delete del;
//				return;
//			}
//			else //---обидві дочірні ноди не налл
//			{
//				Node* minNode = FindMin(root->right);
//				root->val = minNode->val;
//				root->key = minNode->key;
//				DelByKey(root->right, minNode->key);
//			}
//		}
//	}
//};
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	BinaryTree bt;
//	Node * root = nullptr;
//	bt.AddToTree(root, 90, "Ivanov");
//	bt.AddToTree(root, 100, "Petrov");
//	bt.AddToTree(root, 20, "Didenko");
//	bt.AddToTree(root, 80, "Pavlenko");
//	bt.AddToTree(root, 50, "Pupkin");	
//	bt.Show(root);
//	cout << endl;
//
//	bt.Search(root, 100);
//
//	bt.DelByKey(root, 90);
//	bt.Show(root);
//	cout << endl;
//
//	bt.DelByKey(root, 80);
//	bt.Show(root);
//
//	bt.DelByKey(root, 20);
//	bt.DelByKey(root, 50);
//	bt.DelByKey(root, 100);
//	bt.DelByKey(root, 100);
//	bt.Show(root);
//	cout << endl;
//
//	bt.AddToTree(root, 80, "Subkin");
//	bt.AddToTree(root, 80, "Romanov");
//	bt.AddToTree(root, 50, "Vasiljev");
//	bt.Show(root);
//	cout << endl;
//
//	bt.Delete(root);
//
//}