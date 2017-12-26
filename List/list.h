class Node{
public:
	int data;
	Node *prev, *next;
};
class List{
private:
	int size;
	Node *head, *tail;
public:
	List();
	void insertFront(int data);
	void insertBack(int data);
	void insertToNthPos(int data, int pos);
	void insertToNthPosFromBack(int data, int pos);
	void deleteFront();
	void deleteBack();
	void deleteNthPos(int pos);
	void deleteNthPosFromBack(int pos);
	void reverse();
	void printList();
	int listSize();
};