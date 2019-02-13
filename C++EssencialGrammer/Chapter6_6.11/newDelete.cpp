#include <iostream>

using namespace std;

int main(){
 
	//int *ptr = new (std::nothrow)int(7);
	///*int *ptr2 = ptr; 

	//delete ptr;
	//ptr = nullptr; 
	//ptr2 = nullptr; */

	//cout << ptr << endl; 
	//cout << &ptr << endl;
	//cout << *ptr << endl; 
	//

	//delete ptr; 
	////ptr = 0;
	////ptr = null;
	//ptr = nullptr;

	//cout << ptr << endl;
	//cout << &ptr << endl;
	//cout << *ptr << endl;

	///*if (ptr != nullptr) {

	//	cout << ptr << endl; 
	//	cout << *ptr << endl; 
	//}*/

	//memory leak 
	while (true) {

		int *ptr = new int;
		cout << ptr << endl; 

		delete ptr; 

	}
}

