//#include<iostream>
//#include<string>
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
//};
//
//void main()
//{
//	BinaryTree bt;
//	Node * root = nullptr;
//	bt.AddToTree(root, 90, "Ivanov");
//	bt.AddToTree(root, 100, "Petrov");
//	bt.AddToTree(root, 20, "Didenko");
//	bt.AddToTree(root, 80, "Pavlenko");
//	bt.AddToTree(root, 50, "Pupkin");	
//	bt.Show(root);
//	cout << endl;
//	bt.AddToTree(root, 80, "Subkin");
//	bt.AddToTree(root, 80, "Romanov");
//	bt.AddToTree(root, 50, "Vasiljev");
//	bt.Show(root);
//
//	bt.Search(root, 100);
//
//
//	bt.Delete(root);
//
//}