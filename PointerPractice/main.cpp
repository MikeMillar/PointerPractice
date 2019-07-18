#include <iostream>
using namespace std;

void manipulate(double *pValue) {
	cout << "2. Value of int in manipulate: " << *pValue << endl;
	*pValue = 10.0; // * points to value stored at the memory that was passed in, then re-assigns the value
	cout << "3. Value of int in manipulate: " << *pValue << endl;
}

int main() {

	int nValue = 8;

	int* pnValue = &nValue; // Points to memory address of nValue.
	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl; // * next to pointer to address, gets the value stored at that address

	cout << "================" << endl;
	double dValue = 123.4;
	cout << "1. dValue " << dValue << endl;
	manipulate(&dValue); // Inputs mem address of dValue
	cout << "4. dValue " << dValue << endl;


	return 0;
}