#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

	//���������� max_numbr�� �ʱⰪ�� 89 �����̸� �ִ� �� 89�� �ùٸ��� ã�� �� ������ 
	//�Ϲ����� ��쿡 ���ؼ� �˷��帮�� ���� numeric limits�� ����ߴ�

	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89};

	int max_number = std::numeric_limits<int>::lowest();

	//max(a,b)�� a��b�� �� ū ���� ���� 
	for (const auto &number : fibonacci) {
		max_number = std::max(number, max_number);
	}

	cout << max_number << endl;

	std::vector<int> array = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	for (const auto &number : fibonacci) {
		max_number = std::max(number, max_number);
	}
	
	cout << max_number << endl;
}

