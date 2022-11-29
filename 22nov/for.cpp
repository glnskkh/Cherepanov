#include <iostream>

using namespace std;

int main(void) {
	const int N = 4;
	int A[N] = { 1, 2, 3, 4 };

	for (auto i : A)
		cout << i;

	// the same as

	int *start = A;
	int *end = A + N;

	for (int *p = start; p != end; ++p)
		cout << *p;

	// int &t = *pT; // t теперь изменяема
}