
#include <iostream>
using namespace std;

int main() {

	while (1) {
		//홀짝 판별 코드 
		int number;

		cout << "정수하나를 입력하고 홀짝인지 결과를 확인하라 ";
		cin >> number;

		if (number % 2 == 0 && number != 0) {
			cout << "number은 짝수이다. " << endl;
		}
		else if (number % 2 == 1 && number != 0)
			cout << "number은 홀수이다. " << endl;

		else if (number == 0)
		{
			cout << "number은 짝수도 아니고 홀수도 아니다." << endl;
		}
	}
}
