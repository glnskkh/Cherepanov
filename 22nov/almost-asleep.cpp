#include <iostream>

using namespace std;

void printArr(int *A, size_t len) {
	while (len-- > 0)
		cout << *(A++) << endl;
}

int main(void) {
	const int N = 3;
	int A[N] = {1, 2, 3};
	int *p = new int[N] {5, 6, 7};

	int s1 = size(A);
	// int s2 = size(p); - do not work, because p is on heap, A on stack

	printArr(A, size(A));
}