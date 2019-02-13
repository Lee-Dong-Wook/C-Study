#include <iostream>

int main(){

	using namespace std;

	int value = 5; 
	int *ptr = &value; 

	const int c_value = 6;
	const int *c_ptr = &c_value;

	cout << *c_ptr << endl;

	int value1 = 5; 
	const int *V_ptr = &value1;

	int value2 = 6; 
	V_ptr = &value2;


	int a_value = 5; 
	int *const cc_ptr = &a_value;

	//역참조 de - referencing 가능 
	*cc_ptr = 10;
	cout << cc_ptr << endl;
	cout << &cc_ptr << endl;
	cout << *cc_ptr << endl;

	int b_value = 8;
	//cc_ptr = &b_value; -> x 

	/*const int *const ccc_ptr = &a_value;
	
	*ccc_ptr = 15;   -> x 
	ccc_ptr = &b_value; -> x */



}


