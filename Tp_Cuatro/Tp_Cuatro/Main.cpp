//Practice about pointers

#include <iostream>
#include "List.h"

//Swap function with pointer parameters
void Swap_1(int *p1, int *p2)
{
	int aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}

//Swap function with value parameters
void Swap_2(int &p1, int &p2)
{
	int aux = p1;
	p1 = p2;
	p2 = aux;
}

int main()
{
	/*
	int var = 30;
	int &ref = var;		//This is valid. An int-type "ref" variable is created and the value in "var" is assigned on it.

	int &ref = 1;		//This is not valid unless the pointer is declared as constant or the value assigned to it is equaled to another variable.
	
	int var = 1;
	int *ptr;			//The variable must be initialized
	int &ref = var;
	*ptr = ref;
	*/

	int indice[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr = indice;
	ptr++;
	if ((*ptr * 5) == (*(ptr + 8)))
	{
		printf_s("True\n");
	}
	else
	{
		printf_s("False\n");
	}

	//Swap functions in action
	int value1 = 5;
	int value2 = 10;

	std::cout << value1 << "    " << value2 << "\n";

	Swap_1(&value1, &value2);

	std::cout << value1 << "    " << value2 << "\n";

	Swap_2(value1, value2);

	std::cout << value1 << "    " << value2 << "\n";

	//List test
	int nodeValue1 = 10;
	int nodeValue2 = 25;

	List* test = new List();
	test->InsertFirst(nodeValue1);
	test->InsertLast(nodeValue2);
	test->InsertLast(7);
	test->InsertMid(2, 60);

	test->PrintList();

	test->DeleteMid(2);

	test->PrintList();
	int var;
	std::cin >> var;
	return 0;
}
