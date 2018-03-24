#include "List.h"
#include "Node.h"
#include <iostream>

//Constructor / Destructor
List::List()
{
	head = nullptr;
	tail = nullptr;
}


List::~List()
{
}

//Insertion Functions
void List::InsertLast(int value){
	if (IsPrime(value))
	{
		std::cout << "El numero ingresado es primo y no sera agregado a la lista.\n";
	}
	else
	{
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
			tail = temp;
		}
	}
}

void List::InsertFirst(int value)
{
	if (IsPrime(value))
	{
		std::cout << "El numero ingresado es primo y no sera agregado a la lista.\n";
	}
	else
	{
		Node* temp = new Node(value);
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp->SetNext(head);
			head->SetPrev(temp);
			head = temp;
		}
	}
}

void List::InsertMid(unsigned int position, int value)
{
	if (IsPrime(value))
	{
		std::cout << "El numero ingresado es primo y no sera agregado a la lista.\n";
	}
	else
	{
		Node* temp = new Node(value);
		Node* previous = nullptr;
		Node* current = head;

		for (unsigned int i = 1; i < position; i++)
		{
			previous = current;
			current = current->Next();
		}

		previous->SetNext(temp);
		temp->SetNext(current);
		temp->SetPrev(previous);
		current->SetPrev(temp);
	}
}

//Deletion functions
void List::DeleteFirst()
{
	Node* temp = head;
	head = temp->Next();
	head->SetPrev(nullptr);
	temp->~Node();
}

void List::DeleteLast()
{
	Node* temp = tail;
	tail = temp->Previous();
	tail->SetNext(nullptr);
	temp->~Node();
}

void List::DeleteMid(unsigned int position)
{
	Node* temp = head;
	Node* previous = head->Previous();
	Node* next = head->Next();

	for (unsigned int i = 1; i < position; i++)
	{
		temp = temp->Next();
	}

	previous = temp->Previous();
	next = temp->Next();

	next->SetPrev(previous);
	previous->SetNext(next);
	temp->~Node();
}

//Utility functions
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
		while (temp != nullptr)
		{
			std::cout << temp->Value() << "\n";

			std::cout << temp->Previous() << "\n";
			std::cout << temp->Next() << "\n";

			temp = temp->Next();

			count++;
			std::cout << count << "\n";
		}
	}
}

bool List::IsPrime(int value)
{
	bool prime = true;
	int aux = 0;
	if (value == 1 || value == 0 || value == -1)
		prime = true;
	else
	{
		for (int i = 2; i < value; i++)
		{
			aux = value / i;
			aux = aux * i;

			if (aux == value)
				prime = false;
		}
	}
	return prime;
}