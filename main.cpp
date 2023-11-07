#include <iostream>

using namespace std;

void sumArrays(int* A, int* B, int* C, int size) {
	for (int i = 0; i < size; ++i) {
		C[i] = A[i] + B[i];

	}
}

int main() {
	const int size = 5;

	int arrayA[size] = { 3, 6, 9, 12, 15 };
	int arrayB[size] = { 1, 2, 3, 4, };
	int arrayC[size];


	sumArrays(arrayA, arrayB, arrayC, size);

	cout << "Array C (the sum of arrays A and B): ";
	for (int i = 0; i < size; ++i) {
		cout << arrayC[i] << " ";
	}
	cout << endl;

	return 0;
}