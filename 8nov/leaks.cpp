#include <iostream>

using namespace std;

int main(void) {
	int *pInt1 = new int; // That is zombie
	int *pInt2 = new int;

	pInt1 = pInt2;

	// Free the same pointer twice
	delete pInt1;
	delete pInt2;
}