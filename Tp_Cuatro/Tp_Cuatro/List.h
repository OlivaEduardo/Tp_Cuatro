#ifndef LIST
#define LIST

#include "Node.h"

class List
{
private:
	Node* tail;
	Node* head;

public:
	List();
	~List();

	void InsertLast(int value);
	void InsertFirst(int value);

	void PrintList();
};

#endif // !LIST
