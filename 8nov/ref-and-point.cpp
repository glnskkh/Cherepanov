#include <iostream>

using namespace std;

int main(void) {
	int x = 12;

	int *pX = &x;

	*pX = 14;

	cout << x << endl; // -> 14

	int **ppX = &pX;

	**ppX = 21; 

	cout << x << endl; // -> 21

	// You should free memory
	// delete ppX; // ppX is on stack
	delete pX;
}