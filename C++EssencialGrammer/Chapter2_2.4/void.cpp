#include <iostream>
using namespace std;

void My_Function() {


}

int main() {

	//void Ÿ���� ������ �����ϰ� ������ �޸𸮸� �������� �ʱ� ������ �����ʴ´�.
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