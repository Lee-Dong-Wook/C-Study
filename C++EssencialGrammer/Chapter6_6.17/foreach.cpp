#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

	//예제에서는 max_numbr의 초기값이 89 이하이면 최대 값 89를 올바르게 찾을 수 있지만 
	//일반적인 경우에 대해서 알려드리기 위해 numeric limits를 사용했다

	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89};

	int max_number = std::numeric_limits<int>::lowest();

	//max(a,b)는 a와b중 더 큰 것을 리턴 
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

