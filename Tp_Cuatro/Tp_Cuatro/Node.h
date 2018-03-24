#ifndef NODE
#define NODE

class Node
{
private:

	int value;

	Node* previous;
	Node* next;
public:

	Node(int x);
	Node(int x, Node* prevPtr, Node* nextPtr);
	~Node();

	void SetPrev(Node* prevPtr);
	void SetNext(Node* nextPtr);
	void SetValue(int x);
	int Value();
	Node* Next();
	Node* Previous();
};

#endif // !NODE



