#include <iostream>

using namespace std;

int main(void) {
	const int a = 13;
	const int b = 14;
	const int c = 15;

	cout << *(&b - 1) << endl;
}