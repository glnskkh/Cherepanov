#include <iostream>
#include <random>

using namespace std;

int main(void) {
	int n = 1000000;

	mt19937_64 randomGen;

	uint64_t result = 0;

	for (int i = 0; i < n; ++i) {
		uint64_t* pTemp = new uint64_t;

		*pTemp = randomGen();

		result += *pTemp;

		// Leak here: memory has not been freed
		// Fix:
		delete pTemp;
	}

	cout << result;
}