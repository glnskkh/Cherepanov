#include <iostream>

using namespace std;

/* От противного: пусть у нас нет делителей до sqrt(n), тогда если есть делитель p больше sqrt(x)
	то есть делитель x / p, он меньше sqrt(x) иначе sqrt(x)^2 > x
*/
bool isPrime(int x) {
	int d = 2;

	while (x % d != 0 && d * d <= x)
		++d;

	return !(d * d <= x);
}

int main(void) {
	// Algorithm - от имени арабского ученного

	cout << isPrime(9) << endl;
}