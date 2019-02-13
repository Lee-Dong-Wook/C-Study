#include <iostream>

using namespace std; 

//const char* getName() {
//
//	return "raynor & sara";
//}

int main(){
  
	//char name[] = "raynor"; 

	//const char *n_ptr = "raynor";
	//const char *n_ptr2 = "raynor";
	//const char *n_ptr3 = "sara";
	//const char *n_ptr4 = getName();
	//const char *n_ptr5 = getName();

	//cout << name << endl;
	//cout << n_ptr << endl;
	//cout << *n_ptr << endl;

	////ÁÖ¼ÒÂï±â 
	//cout << (uintptr_t)n_ptr << endl;
	//cout << (uintptr_t)n_ptr2 << endl;
	//cout << (uintptr_t)n_ptr3 << endl;

	//cout << (uintptr_t)n_ptr4 << endl;
	//cout << (uintptr_t)n_ptr5 << endl;

	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "raynor & sara";
	const char *name = "name";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;

	char c = 'R';
	cout << c << endl;
	cout << &c << endl;
	cout << (int)&c << endl;
	cout << *(&c) << endl;
}

