#include <iostream>

class Node{
public:
	int data;
	Node *right, *left;
	// Node();
	Node(int data);
	Node(int data, Node* left, Node* right);
	// ~Node();
};

class Tree{
public:
	// int size;
	Node *root;
	Tree();
	Tree(Node *root);
	// void printTree();
	void printLevelOrder(Node *node);
	void printInOrder(Node *node);
	void printPreOrder(Node *node);
	void printPostOrder(Node *node);
	// ~Tree();
};