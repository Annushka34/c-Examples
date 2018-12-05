#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Node
{
	int key;
	string val;
	Node* left;
	Node* right;
};

class BinaryTree
{
public:
	void AddToTree(Node*&root, int key, string val)
	{
		if (!root)
		{
			root = new Node();
			root->key = key;
			root->val = val;
			root->left = nullptr;
			root->right = nullptr;
		}
		else if ( key > root->key) { AddToTree(root->right, key, val); }
		else if ( key < root->key) { AddToTree(root->left, key, val); }
		else if ( key == root->key)
		{ 
			root->val = val;
			return;
		}
	}
	void Show(Node* root)
	{
		if (!root) return;
		if (root->left) { Show(root->left); }
		cout <<root->key<<" : "<< root->val << "\n";
		if (root->right) { Show(root->right); }
	}
	Node* FindMin(Node * root)
	{
		if (!root->left) return root;
		FindMin(root->left);
	}

	void Delete(Node*& root)
	{
		if (root->left) { Delete(root->left); }
		if (root->right) { Delete(root->right); }
		delete root;
		root = nullptr;
	}
	void DelByKey(Node *& root, int key)
	{
		if (root == nullptr) { cout << " Меня тут нет))) \n"; return; }
		if (key < root->key) DelByKey(root->left, key);
		if (key > root->key) DelByKey(root->right, key);
		if (root->key == key)
		{
			if (!root->left && !root->right)
			{
				delete root;
				root = nullptr;
				return;
			}
			else if (!root->left)
			{
				Node * del = root;
				root = root->right;
				delete del;
				return;
			}
			else if (!root->right)
			{
				Node * del = root;
				root = root->left;
				delete del;
				return;
			}
			else //---обидві дочірні ноди не налл
			{
				Node* minNode = FindMin(root->right);
				root->val = minNode->val;
				root->key = minNode->key;
				DelByKey(root->right, minNode->key);
			}
		}
	}
	void Search(Node* root, int key)
	{
		if (root == nullptr)
		{
			cout << "No such value\n";
			return;
		}
		if (root->key == key)
		{
			cout << "I find you!!!!" << root->val <<"\n";
			return;
		}
		if (key < root->key)
		{
			Search(root->left, key);
		}
		if (key > root->key)
		{
			Search(root->right, key);
		}
	}

	bool SaveToFile(string filename, Node * root)
	{
		if (!root) return false;
		ofstream out(filename, ios_base::trunc);
		SaveNodeToFile(root, out);
		out.close();
		return true;
	}
	void SaveNodeToFile(Node * cur, ofstream &out)
	{
		if (cur->left)	SaveNodeToFile(cur->left, out);
		if (cur->right)	SaveNodeToFile(cur->right, out);
		out << cur->key << ":" << cur->val << ".";
	}

	bool ReadFromFile(string filename, Node *& root)
	{
		ifstream in(filename);
		char key[5];
		char val[50];
		while (!in.eof())
		{
			/*in >> key;
			in >> val;*/
			in.getline(key, 5, ':');
			if (in.eof()) break;
			in.getline(val,50, '.');
			if (in.eof()) break;
			int k = atoi(key);
			AddToTree(root, k, val);
		}
		in.close();
		return true;
	}
};


void main()
{
	string menuFile;
	cin >> menuFile;
	menuFile += ".txt";
	ifstream in(menuFile);
	char buf[250];
	while (!in.eof())
	{
		in >> buf;
		for (size_t i = 0; i < strlen(buf); i++)
		{
			switch (buf[i]) 
			{
			case '0': cout << char(219); break;
			case '1': cout << char(3); break;
			case '2': cout << " "; break;
			case '3': cout << char(1); break;
			}
		}
			cout  <<endl;
	}
	in.close();

	string filename = "myFile.txt";
	BinaryTree bt;
	Node * root = nullptr;

	bt.ReadFromFile(filename, root);
	bt.Show(root);
	cout << endl;
	int key = 0;
	string value;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter key - value: ";
		cin >> key;
		cin >> value;
		bt.AddToTree(root, key, value);
	}
	/*cout << "Enter key to delete: ";
	cin >> key;
	bt.DelByKey(root, key);*/
	cout << endl;
	bt.Show(root);
	if (bt.SaveToFile(filename, root)) cout << "Saved\n";
}