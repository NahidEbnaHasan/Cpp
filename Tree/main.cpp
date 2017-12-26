#include <iostream>
#include "tree.h"

int main(){
	Node *left, *right, *root;
	left = new Node(2, new Node(4), new Node(5));

	right = new Node(3, new Node(6), new Node(7));
	
	root = new Node(1, left, right);

	Tree t(root);

	// t.printTree();
	t.printInOrder(root);
	std::cout<<std::endl;
	t.printPreOrder(root);
	std::cout<<std::endl;
	t.printPostOrder(root);
	std::cout<<std::endl;
	t.printLevelOrder(root);
	std::cout<<std::endl;
	return 0;
}