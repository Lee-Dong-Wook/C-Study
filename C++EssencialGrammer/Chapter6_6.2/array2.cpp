#include <iostream>

using namespace std;

void doSomething(int test_value[5]) {

	cout << "�Լ��� ���� �ּ� " << (int)&test_value << endl;

	for (int i = 0; i < 5; i++) {

		cout << '[' << i << '] ' << "�Լ��� ���� �� �迭�� �� " << test_value[i] << endl;
		cout << '[' << i << '] ' << "�Լ��� ���� �� �迭�� �ּ� " << (int)&test_value[i] << endl<<endl;
	}

	cout << "�Լ��� ���� �迭 ũ�� " << sizeof(test_value) << endl;
}

int main(){
 
	/*const int num_size = 5; 

	int num_array[num_size];

	cout << "�迭 ��ü �ּ� : " <<&num_array << endl<<endl; 

	for (int i = 0; i < num_size; i++) {

		cout << i << "�迭 �ּ�(16����) : " << &num_array[i] << endl;
		cout << i << "�迭 �ּ�(int) : " << (int)&num_array[i] << endl<<endl;
	}

	cout << "�迭 ũ�� : " << sizeof(num_array) << endl;*/


	const int test_size = 5; 

	int test_value[test_size] = { 1,2,3,4,5 };

	cout << "�迭��ü �ּ� " << (int)&test_value << endl;
	
		for (int i = 0; i < 5; i++) {

			cout <<'['<< i<< '] '<< "�� �迭�� �� " << test_value[i] << endl;
			cout << '[' << i << '] ' << "�� �迭�� �ּ� " << (int)&test_value[i] << endl<<endl;
		}

		cout << "�迭 ũ�� " << sizeof(test_value) << endl;
		cout << endl; 
		doSomething(test_value);
}

