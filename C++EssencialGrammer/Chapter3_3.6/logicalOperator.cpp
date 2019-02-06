#include <iostream>
using namespace std;

int main() {

	bool x = true;
	bool y = false; 

	//logical AND;
	cout << (x && y) << endl; 

	//logical OR
	cout << (x || y) << endl; 

	//logical XOR
	//false false false
	//false true  true
	//true  false true
	//true  true  false 

	cout << (x!= y) << endl<<endl;

	//logical 우선순위 
	bool v1 = true;
	bool v2 = false;
	bool v3 = false; 

	bool r1 = v1 || v2 && v3; //true 
	bool r2 = (v1 || v2) && v3; // false 

	cout << r1 << endl;
	cout << r2 << endl;

	//example
	bool hit = true; 
	int health = 10;

	if (hit && health < 20) {

		cout << "die" << endl;
	}

	else
		health -= 20; 

	int value1 = 5;
	int value2 = 7;

	if (value1 != value2) {
		cout << "x does not equal y" << endl;
	}
	else
		cout << "x equal y" << endl; 

	//short circuit evaluation
	int value3 = 2;
	int value4 = 2;

	if (value3 == 1 && value4++ == 2) {
		
		//contents
	}

	cout << value4 << endl<<endl; //3


}