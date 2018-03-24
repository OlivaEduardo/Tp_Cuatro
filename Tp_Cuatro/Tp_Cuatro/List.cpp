#include "List.h"
#include "Node.h"
#include <iostream>

List::List()
{
	head = nullptr;
	tail = nullptr;
}


List::~List()
{
}

void List::InsertLast(int value){
	Node* temp = new Node(value);
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->SetPrev(tail);
		tail->SetNext(temp);
	}
}

void List::InsertFirst(int value)
{
	Node* temp = new Node(value);
	if (head == nullptr)
	{
		head = temp;
		List:tail = temp;
	}
	else
	{
		temp->SetNext(head);
		head->SetPrev(temp);
	}
}

void List::PrintList()
{
	if (head == nullptr)
	{
		std::cout << "La lista se encuentra vacia.\n";
	}
	else
	{
		Node* temp = head;
		int count = 0;
		do
		{
			std::cout << temp->Value() << "\n";

			temp = temp->Next();

			count++;
			std::cout << count << "\n";

		}while (temp->Next() != nullptr);

	}
}