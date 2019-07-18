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
	cout << endl;

	const int NSTRINGS = 5;
	string texts2[NSTRINGS] = { "one", "two", "three", "four", "five" };
	string *pTexts2 = texts2;
	cout << *pTexts2 << endl;
	pTexts2 += 3;
	cout << *pTexts2 << endl;
	pTexts2 -= 2;
	cout << *pTexts2 << endl;

	string *pEnd2 = &texts2[NSTRINGS];
	while (pTexts2 != pEnd2) {
		cout << *pTexts2 << endl;
		pTexts2++;
	}

	// Set pTexts2 back to start
	pTexts2 = &texts2[0];
	int elements = pEnd2 - pTexts2;
	cout << elements << endl;

	// Set pTexts2 back to start
	pTexts2 = &texts2[0];
	pTexts2 += NSTRINGS / 2; // Changes to pointer of middle of array
	cout << *pTexts2 << endl;


	// Char arrays
	char text3[] = "hello";
	for (int i = 0; i < sizeof(text3) / sizeof(char); i++) {
		cout << i << ": " << text3[i] << endl;
	}

	int k = 0;
	while (true) {
		if (text3[k] == 0) {
			break;
		}
		cout << text3[k] << flush;
		k++;
	}
	cout << endl;


	// Reversing a string with pointers
	char text4[] = "hello";
	int len = sizeof(text4)-1;
	char* pStart = text4;
	char* pEnd4 = text4 + len - 1;
	while (pStart < pEnd4) {
		char temp = *pStart;
		*pStart = *pEnd4;
		*pEnd4 = temp;

		pStart++;
		pEnd4--;
	}
	cout << text4 << endl;

	return 0;
}