#include <iostream>

using namespace std;

int *dividers(int n, int &outCount) {
	int *d = new int[n] {0};
	int k = 0;

	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0)
			d[k++] = i;

		if (i * i != n)
			d[k++] = n / i;
	}

	outCount = k;

	return d;
}

int main(void) {
	int count;
	int *p = dividers(12, count);

	for (int i = 0; i < count; ++i)
		cout << p[i] << endl;
}