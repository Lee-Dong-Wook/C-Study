#include <iostream>
#include <bitset>
using namespace std;

int main() {

	int j	= 3;
	int i	= 1;
	int k	= 123;
	char  a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	bool bValue		= true;
	char chValue	= 'A';
	float fValue	= 3.14f;
	float dValue	= 3.14;

	auto aValue		= "hi";
	auto aValue2	= 123;

	float BYTE_4	= 1.0f;
	double BYTE_8	= 1.0;

	cout << bValue	<< endl; 
	cout << chValue << endl;
	cout << (int)chValue << endl;
	cout << fValue	<< endl;
	cout << dValue	<< endl;
	cout << aValue	<< endl;
	cout << aValue2 << endl;

	cout << sizeof(BYTE_4)	<< endl;
	cout << sizeof(BYTE_8)	<< endl; 
	cout << sizeof(int)		<< endl;
	cout << sizeof(bool)	<< endl;

	return 0; 
}