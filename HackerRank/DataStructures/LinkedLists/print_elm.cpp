#include <iostream>

class Node{
public:
	int data;
	Node *prev, *next;
	Node(){
		this->data = 0;
		this->prev = NULL;
		this->next = NULL;
	}
	Node(int data){
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}
	Node(int data, Node *prev, Node *next){
		this->data = data;
		this->prev = prev;
		this->next = next;
	}
	// ~ Node(){}
};

class List{
private:
	int size;
	Node *head, *tail;
public:
	List(){
		this->size = 0;
		this->head = NULL;
		this->tail = NULL;
	}
	List(Node *head, Node *tail){
		this->head = head;
		head->next = tail->prev;
		this->tail = tail;
		tail->prev = head->next;
		this->size = 2;
	}
	void insertBack(int data){
		if(size == 0){
			head = new Node(data);
			tail = head;
			size++;
			// std::cout<<head->data<<std::endl;
			// std::cout<<head->prev<<std::endl;
			// std::cout<<head->next<<std::endl;
			// std::cout<<tail->data<<std::endl;
			// std::cout<<tail->prev<<std::endl;
			// std::cout<<tail->next<<std::endl;
			// std::cout<<"SIZE:"<<size<<std::endl;
		}else{
			Node *temp, *t;
			temp = new Node(data);
			// t = tail;
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
			size++;
			// std::cout<<tail->data<<std::endl;
			// std::cout<<tail->prev<<std::endl;
			// std::cout<<tail->next<<std::endl;
			// std::cout<<"SIZE:"<<size<<std::endl;
		}
	}
	void printList(){
		if(size == 0){
			std::cout<<"NULL"<<std::endl;
		}else{
			Node *h;
			h = head;
			do{
				std::cout<<h->data<<"->";
				h = h->next;
			}while(h != NULL);
			// while(h->next != NULL){
			// 	std::cout<<h->data<<"->";
			// 	h = h->next;
			// }
			std::cout<<"NULL"<<std::endl;
		}
	}
};

int main(){
	List l;
	// l.insertBack(1);
	// l.insertBack(2);
	// l.insertBack(3);
	// l.printList();
	int d;
	while(std::cin>>d){
		l.insertBack(d);
		l.printList();
	}
	return 0;
}