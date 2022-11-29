#include <iostream>

using namespace std;

// Сам указатель - число передается по значению
void PrintByValue(int *pInt) {
	cout << "ЧИСЛО: " << *pInt << endl;
}

void PrintByRef(int *&pInt) {
	cout << "ЧИСЛО: " << *pInt << endl;
}

void Zero(int *pInt) {
	*pInt = 0;
	// если pInt = new int(0); то указатель при выходе из памяти:
	// потеря значения; есть утечка памяти
}

int* Create(int a) {
	return new int(a); // Возможно!
}

// В пару к New лучше делать и метод Destroy
void Destroy(int *a) {
	delete a;
}

bool TryCreate(int a, int *&p) {
	if (pInt == nullptr)
		return false;

	if (a != 0) {
		pInt = new int(1);
		return true;
	}

	pInt = nullptr;
	return false;
}

int main(void) {
	int *pInt = new int(17);

	PrintByRef(pInt);

	delete pInt;

	// int *const p - константный указатель (можно изменить значение указателя)
	// const int* p - указатель на константу

	const int a = 12;

	const int* pA1 = &a;
	// int *const pA2 = &a;

	// Create(12) - утечка памяти => bool TryCreate(int a, int *&p);
}