#include <iostream>
using namespace std;

void My_Function() {


}

int main() {

	//void 타입의 변수를 선언하고 싶지만 메모리를 차지하지 않기 때문에 되지않는다.
	//void my_void;

	int i		= 123;
	float f		= 123.456f;
	void *my_void;

	my_void		= (void*)&i;

	cout << my_void << endl;

	my_void		= (void*)&f;

	cout << my_void << endl;

	return 0; 
}