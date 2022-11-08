#include <iostream>

using namespace std;

int arr[100];
int n = 0;

void push(int e) {
	arr[n++] = e;
}

int pop() {
	if (!(n > 0))
		return -1;

	return arr[--n];
}

int main() {
	int x = 1;

	int &ref = x;

	for (int i = 0; i < 10; ++i)
		push(i);

	for (int i = 0; i < 10; ++i)
		cout << pop() << endl;
}