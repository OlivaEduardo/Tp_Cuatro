#include "Node.h"

#include <iostream>


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

void Node::SetValue(int x)
{
	value = x;
}

int Node::Value()
{
	return value;
}

void Node::SetPrev(Node* prevPtr)
{
	previous = prevPtr;
}

void Node::SetNext(Node* nextPtr)
{
	next = nextPtr;
}

Node* Node::Next()
{
	return next;
}

Node* Node::Previous()
{
	return previous;
}
