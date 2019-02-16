#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5> &my_arr) {

	cout << my_arr.size() << endl;
}

int main(){

	int arr[5] = { 1,2,3,4,5 };

	std::array<int, 5> my_arr = { 1,2,3,4,5 };

	my_arr = { 1,2,3 };
	my_arr = { 2,3,4,5 };

	cout << my_arr[0]<<endl;				
	cout << my_arr.at(0) << endl;   
	
	printLength(my_arr);

	std::array<int, 7> u_sortArray = { 5,30,99,1,0,20,5 };

	//ellement�� ����ϸ� �Ű������� �� �� ���縦 ���� �ʴ´�. ��������. 
	for (auto &element : u_sortArray) {
		cout << element << " ";
	}

	cout << endl;

	//���� 
	std::sort(u_sortArray.begin(), u_sortArray.end());

	for (auto &element : u_sortArray) {
		cout << element << " ";
	}

	cout << endl;

	//��������
	std::sort(u_sortArray.rbegin(), u_sortArray.rend());

	for (auto &element : u_sortArray) {
		cout << element << " ";
	}

	cout << endl;
	
	return 0;
}

