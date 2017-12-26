#include <iostream>
#include "list.h"

int main(){
	int d, p;
	List l;
	// l.printList();
	l.insertBack(5);
	l.insertBack(7);
	l.insertBack(71);
	l.insertBack(78);
	l.insertBack(2);
	l.insertBack(26);
	l.printList();
	while(std::cin >> d){
		std::cin >> p;
		// l.insertFront(d);
		// l.insertBack(d);
		// l.insertToNthPos(d, p);
		// l.insertToNthPosFromBack(d, p);
		l.printList();
	}
	return 0;
}