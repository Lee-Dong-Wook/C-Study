#include <iostream>

using namespace std;

void doSomething(int test_value[5]) {

	cout << "함수를 통한 주소 " << (int)&test_value << endl;

	for (int i = 0; i < 5; i++) {

		cout << '[' << i << '] ' << "함수를 통한 각 배열의 값 " << test_value[i] << endl;
		cout << '[' << i << '] ' << "함수를 통한 각 배열의 주소 " << (int)&test_value[i] << endl<<endl;
	}

	cout << "함수를 통한 배열 크기 " << sizeof(test_value) << endl;
}

int main(){
 
	/*const int num_size = 5; 

	int num_array[num_size];

	cout << "배열 자체 주소 : " <<&num_array << endl<<endl; 

	for (int i = 0; i < num_size; i++) {

		cout << i << "배열 주소(16진수) : " << &num_array[i] << endl;
		cout << i << "배열 주소(int) : " << (int)&num_array[i] << endl<<endl;
	}

	cout << "배열 크기 : " << sizeof(num_array) << endl;*/


	const int test_size = 5; 

	int test_value[test_size] = { 1,2,3,4,5 };

	cout << "배열자체 주소 " << (int)&test_value << endl;
	
		for (int i = 0; i < 5; i++) {

			cout <<'['<< i<< '] '<< "각 배열의 값 " << test_value[i] << endl;
			cout << '[' << i << '] ' << "각 배열의 주소 " << (int)&test_value[i] << endl<<endl;
		}

		cout << "배열 크기 " << sizeof(test_value) << endl;
		cout << endl; 
		doSomething(test_value);
}

