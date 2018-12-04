//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class T, class T1>
//struct Node
//{
//	T key;
//	T1 val;
//	Node* left;
//	Node* right;
//};
//
//template<class T, class T1>
//class BinaryTree
//{
//public:
//	void AddToTree(Node<T, T1>*&root, T key, T1 val)
//	{
//		if (!root)
//		{
//			root = new Node<T, T1>();
//			root->key = key;
//			root->val = val;
//			root->left = nullptr;
//			root->right = nullptr;
//		}
//		else if (key > root->key) { AddToTree(root->right, key, val); }
//		else if (key < root->key) { AddToTree(root->left, key, val); }
//		else if (key == root->key)
//		{
//			root->val = val;
//			return;
//		}
//	}
//	void Show(Node<T, T1>* root)
//	{
//		if (root->left) { Show(root->left); }
//		cout << root->key << " : " << root->val << "\n";
//		if (root->right) { Show(root->right); }
//	}
//	void Delete(Node<T, T1>*& root)
//	{
//		if (root->left) { Delete(root->left); }
//		if (root->right) { Delete(root->right); }
//		delete root;
//		root = nullptr;
//	}
//	void Search(Node<T, T1>* root, T key)
//	{
//		if (root == nullptr)
//		{
//			cout << "No such value\n";
//			return;
//		}
//		if (root->key == key)
//		{
//			cout << "I find you!!!!" << root->val << "\n";
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
//	BinaryTree<int, string> bt;
//	Node<int, string> * root = nullptr;
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
//	//bt.Show(root);
//
//	//bt.Search(root, 100);
//
//
//	bt.Delete(root);
//
//
//	BinaryTree<string, string> bt2;
//	Node<string, string> * root2 = nullptr;
//
//	bt2.AddToTree(root2, "Ivanov", "Petja");
//	bt2.AddToTree(root2, "Petrov", "Petja");
//	bt2.AddToTree(root2, "Pupkin", "Vasja");
//
//	//bt2.Show(root2);
//
//	bt2.Search(root2, "Petrov");
//}