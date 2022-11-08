#include <iostream>

using namespace std;

int *F(int n) {
	int x = n + 1;

	return &x;
}

int main(void) {
	int *x = F(10);
	F(11);
	F(12);

	cout << *x << endl;
}