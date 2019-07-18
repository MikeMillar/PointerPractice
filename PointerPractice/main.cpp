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

	string texts[] = { "one", "two", "three" };
	string* pTexts = texts; // This will act the same as the original array
	cout << sizeof(texts) / sizeof(string) << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}
	cout << endl;
	string* pElement = texts; // Points to start of array
	string* pEnd = &texts[2]; // Points to end of array
	while (true) {
		cout << *pElement << " " << flush;
		if (pElement == pEnd) {
			break;
		}
		pElement++;
	}


	return 0;
}