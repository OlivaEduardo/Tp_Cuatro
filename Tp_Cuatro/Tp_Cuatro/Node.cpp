#include "Node.h"

#include <iostream>

int value;

Node* previous;
Node* next;

void Node::SetValue(int x)
{
	value = x;
}

void Node::printValue()
{
	std::cout << "El valor es: " << value << "\n";
}

void Node::SetPrev(Node* prevPtr)
{
	previous = prevPtr;
}

void Node::SetNext(Node* nextPtr)
{
	next = nextPtr;
}

Node::Node(int x)
{
	value = x;
	previous = nullptr;
	next = nullptr;
}

Node::Node(int x, Node* prevPtr, Node* nextPtr)
{
	value = x;
	previous = prevPtr;
	next = nextPtr;
}


Node::~Node()
{
}
