#include <iostream>

using namespace std;

void DoSomething(nullptr_t pNull) {
	pNull = nullptr;
}

int main(void) {
	// ref must be initialized
	// while pointer not!

	// Null-pointers
	int *p1 = NULL;
	int *p2 = nullptr;
	int *p3 = 0;

	int *pInt = new int;
	// or ... = new int {1};

	cout << *pInt << endl; // -> 0

	*pInt = 3;

	cout << *pInt << endl; // -> 3

	// In CPP: new - malloc (mem on heap), delete - free
	// In C: malloc, free

	const int x = 12;
	const int* pX = &x; // Pointer to constant!

	int y = 12;
	int* const pY = &y; // Can change value not address!

	int z = 12;

	const int* const pZ = &z // ...?!
}