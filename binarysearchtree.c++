#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node* leftchild;
    Node* rightchild;

    Node()
    {
        leftchild = nullptr;
        rightchild = nullptr;
    }
};

class BinaryTree {
    public:
    Node* root;

    BinaryTree()
    {
        root = nullptr;
    }

    void insert()
    {
        int x;
        cout << "masukan nilai: ";
        cin >> x;

        Node* newNode = new Node();

        newNode->info = x;

        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;  

        Node *parent = nullptr; 
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        if (parent == nullptr) {
            root = newNode; 

            return;
        }
        
        if(x < parent->info) {
            parent->leftchild = newNode;

            return;
        }

    }
};