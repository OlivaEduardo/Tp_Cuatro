
#ifndef NODE
#define NODE
class Node
{
public:
	void SetPrev(Node* prevPtr);
	void SetNext(Node* nextPtr);
	void SetValue(int x);
	void printValue();

	Node(int x);
	Node(int x, Node* prevPtr, Node* nextPtr);
	~Node();
};

#endif // !NODE


