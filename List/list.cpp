#include <iostream>
#include "list.h"

List::List(){
	head = NULL;
	tail = NULL;
	size = 0;
}

void List::insertFront(int data){
	if(head == NULL){
		head = new Node;
	    head->data = data;
	    head->prev = NULL;
	    head->next = NULL;
	    tail = head;
	    size++;
	}else{
		Node *temp, *h;
		h = head;
	    temp = new Node;
	    temp->data = data;
	    temp->next = head;
	    temp->prev = NULL;
	    h->prev = temp;
	    head = temp;
	    size++;
	}
}

void List::insertBack(int data){
	if(head == NULL){
		head = new Node;
	    head->data = data;
	    head->prev = NULL;
	    head->next = NULL;
	    tail = head;
	    size++;
	}else{
		Node *temp, *t;
		t = tail;
		temp = new Node;
		temp->data = data;
		temp->prev = t;
		temp->next = NULL;
		t->next = temp;
		tail = temp;
		size++;
	}
}
void List::insertToNthPos(int data, int pos){
	if(head == NULL){
		head = new Node;
	    head->data = data;
	    head->prev = NULL;
	    head->next = NULL;
	    tail = head;
	    size++;
	}else{
		Node *temp, *prev, *next;
		prev = head;
		for(int i = 1; i < pos; i++){
			prev = prev->next;
		}
		next = prev->next;
		// std::cout << "PREV " << prev->data << std::endl; 
		// std::cout << "NEXT " << next->data << std::endl; 
		temp = new Node;
		temp->data = data;
		temp->prev = prev;
		temp->next = next;

		prev->next = temp;
		next->prev = temp;

		size++;
	}
}
void List::insertToNthPosFromBack(int data, int pos){
	if(head == NULL){
		head = new Node;
	    head->data = data;
	    head->prev = NULL;
	    head->next = NULL;
	    tail = head;
	    size++;
	}else{
		Node *temp, *prev, *next;
		next = tail;
		for(int i = 1; i < pos; i++){
			next = next->prev;
		}
		prev = next->prev;
		// std::cout << "PREV " << prev->data << std::endl; 
		// std::cout << "NEXT " << next->data << std::endl; 
		temp = new Node;
		temp->data = data;
		temp->prev = prev;
		temp->next = next;

		prev->next = temp;
		next->prev = temp;

		size++;
	}
}
void List::deleteFront(){}
void List::deleteBack(){}
void List::deleteNthPos(int pos){}
void List::deleteNthPosFromBack(int pos){}
void List::reverse(){}
void List::printList(){
	Node *n, *m, *t;
	n = head;
	t = tail;
	if(n == NULL){
		std::cout << "LIST IS EMPTY ";
	}else if(n == t){
		std::cout << "LIST IS : " << n->data << " > ";
	}else{
		std::cout << "LIST IS : ";
		// std::cout << "HEAD DATA: " << n->data << std::endl;
		// std::cout << "HEAD PREV: " << n->prev << std::endl;
		// std::cout << "HEAD NEXT: " << n->next << std::endl;
		// std::cout << "TAIL DATA : " << t->data << std::endl;
		// std::cout << "TAIL PREV : " << t->prev << std::endl;
		// std::cout << "TAIL NEXT : " << t->next << std::endl;
		for(int i = 0; i < size; i++){
			std::cout << n->data << " > ";
			n = n->next;
		}
		// while(n->next != NULL){
		// 	std::cout << n->data << " > ";
		// 	n = n->next;
		// }
		std::cout<< "LIST SIZE IS: " << listSize() << std::endl;
	}
}

int List::listSize(){
	return size;
}