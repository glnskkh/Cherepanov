#include <iostream>

using namespace std;

int main(void) {
	int n = 12;

	int *numbers = new int[n] {0};
	int *primes = new int[n] {0};

	for (int i = 2; i < n; ++i)
		numbers[i] = i;

	for (int p = 2; p < n; ++p) {
		if (numbers[p] == 0)
			continue;

		for (int i = p * p; i < n; i += p)
			numbers[i] = 0;
	}

	int k = 0
	for (int i = 0; i < n; ++i)
		if (numbers[i] != 0)
			primes[k++] = numbers[i];

	// Теорема распределения простых чисел: nk = klnk
	// nsum(1/p) = nint[1/klnk] ~= kln(lnk)
}