#include <iostream>

using namespace std;

int main(){

	//const int num_size = 5; 
	int value[] = { 1,2,3,4,5 };

	//�Ųٷ� num_size�� ���� �� �ִ�.
	const int num_size = sizeof(value) / sizeof(int); 

	int total_value = 0; 
	double avg = 0;

	for (int i = 0; i < num_size; i++) {

		total_value += value[i];
	}

	avg = static_cast<double>(total_value) / num_size;

	cout << avg << endl;

	int max_value = 0; 
	int min_value = 1000;

	//�ְ�, ���� ���� ���ϴ� �ڵ� 
	for (int i = 0; i < num_size; i++) {

		//max_value = (max_value < value[i]) ? value[i] : max_value;
		if (max_value < value[i]) max_value = value[i];
		}

	for (int i = num_size-1; i >= 0; i--) {
		
		//min_value = (min_value > value[i]) ? value[i] : min_value;
		if (min_value > value[i]) min_value = value[i];
		
	}
	cout <<"�ְ� �� : " << max_value << endl;
	cout << "���� �� : " << min_value << endl;
}


