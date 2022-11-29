#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x) {
	int d = 2;

	while (x % d != 0 && d * d <= x)
		++d;

	return !(d * d <= x);
}

int *factorize(int x, int &count) {
	int *pA = new int[(int)(sqrt(x) + 1)] {0};
	int k = 0;

	for (int i = 2; i < sqrt(x); ++i)
		if (x % i == 0 && isPrime(i))
			pA[k++] = i;

	count = k;

	return pA;
}

int main(void) {
	
}