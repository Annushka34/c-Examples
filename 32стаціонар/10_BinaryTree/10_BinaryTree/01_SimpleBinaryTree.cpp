//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Node
//{
//	int val;
//	Node* left;
//	Node* right;
//};
//class BinaryTree
//{
//public:
//	void AddToTree(Node*&root, int val)
//	{
//		if (!root)
//		{
//			root = new Node();
//			root->val = val;
//			root->left = nullptr;
//			root->right = nullptr;
//		}
//		else if (val > root->val) { AddToTree(root->right, val); }
//		else if (val < root->val) { AddToTree(root->left, val); }
//		else { return; }
//	}
//	void Show(Node* root)
//	{
//		if (root->left) { Show(root->left); }
//		cout << root->val << " ";
//		if (root->right) { Show(root->right); }
//	}
//	void Delete(Node*& root)
//	{
//		if (root->left) { Delete(root->left); }
//		if (root->right) { Delete(root->right); }
//		delete root;
//		root = nullptr;
//	}
//};
//
//void main()
//{
//	BinaryTree bt;
//	Node * root = nullptr;
//	bt.AddToTree(root, 90);
//	bt.AddToTree(root, 100);
//	bt.AddToTree(root, 20);
//	bt.AddToTree(root, 80);
//	bt.AddToTree(root, 50);
//	bt.AddToTree(root, 30);
//	bt.AddToTree(root, 12);
//	bt.AddToTree(root, 10);
//	bt.Show(root);
//
//	bt.Delete(root);
//
//
//	string str1 = "hello";
//	string str3;
//	string str2;
//	str2 = "hello";
//	//str1 += str1;
//	cout << boolalpha <<"\n"<< (str1 == str2);
//	str1 = str2;
//}