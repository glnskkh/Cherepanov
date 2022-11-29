#include <iostream>

using namespace std;

int main(void) {
	const int N = 3;

	int A[N] = { 1, 2, 3 };

	// A == &A[0]
	for (int i = 0; i < N; ++i) {
		cout << *(A + i) << endl;
	}

	// -------------------

	const int L = 3, M = 4;
	int B[L][M] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int size = L * M;

	int *row = (int*)B;

	for (int i = 0; i < min(L, M); ++i) {
		auto t1 = B + i; // t1: int**

		int *t2 = *t1;

		int t = *(t2 + i);

		cout << t << endl;
	}
}