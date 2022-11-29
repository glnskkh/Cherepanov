#include <iostream>

using namespace std;

int main(void) {
	const int N = 2;

	// Size: n*sizeof(int*) + n*m*sizeof(int) + sizeof(int**)
	int **A = new int*[N];

	// Create
	for (int i = 0; i < N; ++i) {
		A[i] = new int[N];

		for (int j = 0; j < N; ++j) {
			A[i][j] = 0;
		}
	}

	// Destroy
	for (int i = 0; i < N; ++i) {
		delete[] A[i];
		A[i] = nullptr;
	}

	delete[] A;
}