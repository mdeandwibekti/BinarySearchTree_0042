#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};
class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = nullptr; // initializing ROOT to null
	}

	void insert(string element)
	{
		Node* newNode = new Node(element, nullptr, nullptr);
		newNode->info = element;
		newNode->leftchild = nullptr;
		newNode->rightchild = nullptr;

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode);

		if (parent == nullptr)
		{
			ROOT = newNode;
			return;
		}

		if (element < parent->info)
		{
			parent->leftchild = newNode;
		}
		else if (element > parent->info)
		{
			parent->rightchild = newNode;
		}

	}

	void search(string element, Node*& parent, Node*& currentNode)
	{
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && currentNode->info != element)
		{
			parent = currentNode;



	}
};

