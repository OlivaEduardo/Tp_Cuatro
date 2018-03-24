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
	void InsertMid(unsigned int position, int value);

	void DeleteFirst();
	void DeleteLast();
	void DeleteMid(unsigned int position);

	bool IsPrime(int value);
	void PrintList();
};

#endif // !LIST
