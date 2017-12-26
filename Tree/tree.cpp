#include <iostream>
#include <queue>
#include "tree.h"

Node::Node(int data){
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}

Node::Node(int data, Node* left, Node* right){
	this->data = data;
	this->left = left;
	this->right = right;
}

Tree::Tree(){
	root = NULL;
}

Tree::Tree(Node *root){
	root = root;
}

/*void Tree::printTree(){
	std::cout<<"ROOT: "<<root->data<<std::endl;
	std::cout<<"LEFT: "<<(root->left->data)<<std::endl;
	std::cout<<"RIGHT: "<<(root->right->data)<<std::endl;
}*/

void Tree::printLevelOrder(Node *node){
	std::queue<Node*> q;
	q.push(node);
	while(!q.empty()){
		Node *n = q.front();
		std::cout<<n->data<<" ";
		if(n->left != NULL){
			q.push(n->left);
		}
		if(n->right != NULL){
			q.push(n->right);
		}
		q.pop();
	}
}

void Tree::printInOrder(Node *node){
	if(node == NULL) return;
	printInOrder(node->left);
	std::cout<<node->data<<" ";
	printInOrder(node->right);
}

void Tree::printPostOrder(Node *node){
	if(node == NULL) return;
	printPostOrder(node->left);
	printPostOrder(node->right);
	std::cout<<node->data<<" ";
}

void Tree::printPreOrder(Node *node){
	if(node == NULL) return;
	std::cout<<node->data<<" ";
	printPreOrder(node->left);
	printPreOrder(node->right);
}