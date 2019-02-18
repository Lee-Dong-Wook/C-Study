#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func() {

	return 5; 

}

int goo() {

	return 9; 
}

int  foo(int x) {

	return x; 
}

bool isEven(const int& number) {

	if (number % 2 == 0) return true;
	else return false; 

}

bool isOdd(const int &number) {

	if (number % 2 == 1) return true;
	else return false;
}						

typedef bool(*check_fnc_t)(const int &);
using check_fnc_t = bool(*)(const int &);
											//�Լ������� ���� isEven�̳� isOdd�� ���� 
void printNumbers(const std::array<int, 10> &my_array, std::function<bool(const int &)> check_fnc) {

	for (auto element : my_array) {

		if (check_fnc(element) == true ) cout << element << " ";
	}
	cout << endl;
}

int main(){

	cout <<"�Լ��� �� ���� : "<< func() << endl; 
	cout <<"�Լ��� �ּ� ���� : " << func << endl;

	int(*fcnptr)() = func;
	cout << "�Լ��� �� ���� : " << fcnptr() << " �Լ��� �ּ� ���� : " << func << endl;
	
	fcnptr = goo; 
	cout << "�Լ��� �� ���� : " << fcnptr() << " �Լ��� �ּ� ���� : " << fcnptr << endl;

	int(*fptr)(int x) = foo; 
	cout << "�Լ��� �� ���� : " << fptr(3) << " �Լ��� �ּ� ���� : " << fptr << endl;

	std::array<int, 10>my_array{ 0,1,2,3,4,5,6,7,8,9 };

	std::function<bool(const int &)> lfptr = isEven;

	printNumbers(my_array, lfptr);

	lfptr = isOdd; 

	printNumbers(my_array,isOdd);
	
	

	return 0; 
}

