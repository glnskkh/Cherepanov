#include <iostream>

using namespace std;

int main(void) {
	// Heap - unsized memory, but you should go to some adress, 
	// while on stack value is always on the top.

	float *pFloat = new float(7);

	cout << sizeof(pFloat) << endl; // -> 8
	cout << sizeof(*pFloat) << endl; // -> 4

	string *pString = new string;

	cout << sizeof(pString) << ' ' << sizeof(*pString) << endl; // -> 8 32

	cout << pString->size() << endl; // obj->met <=> (*obj).met
}