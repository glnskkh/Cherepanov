#include <iostream>

using namespace std;

int main(void) {
	int n = 3;

	int* pArr = new int[n] { 1, 2, 3 };

	// a[n] <=> *(a + n) // shift by n * sizeof(a[0]);

	delete[] pArr; // work without specifying n because heap stores size;
}