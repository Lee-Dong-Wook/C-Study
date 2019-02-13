#include <iostream>

using namespace std; 

int main()
{
	int value = 8;
	int *ptr = &value;

	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl; 
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr+2) << endl;


	cout << endl << endl; 

	double d_value = 123.0;
	double *d_ptr = &d_value;
	cout << uintptr_t(d_ptr - 1) << endl;
	cout << uintptr_t(d_ptr) << endl;
	cout << uintptr_t(d_ptr + 1) << endl;
	cout << uintptr_t(d_ptr + 2) << endl;	

	cout << endl << endl;

	int array[] = { 1,2,3,4,5 }; //주소가 이웃하다. 

	cout << (uintptr_t)array << " " << (uintptr_t)&array << endl;

	int *_ptr = array;

	
	for (int i = 0; i < 5; i++) {

		cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		cout << *(_ptr +i)<< " " << (uintptr_t)(_ptr + i) << endl;
	}

	cout << endl << endl;
	
	char name[] = "raynor";

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; i++) {

		cout << name << endl; 
		
	}
	for (int i = 0; i < n_name; i++) {

		cout << (name + i) << endl << endl;

	}

	char *c_ptr = name; 
	for (int i = 0; i < n_name; i++) {

		cout << *(name + i) << " ";
		cout << *(c_ptr + i) << " ";
		cout << endl;
	}
}

