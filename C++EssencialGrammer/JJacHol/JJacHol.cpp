
#include <iostream>
using namespace std;

int main() {

	while (1) {
		//Ȧ¦ �Ǻ� �ڵ� 
		int number;

		cout << "�����ϳ��� �Է��ϰ� Ȧ¦���� ����� Ȯ���϶� ";
		cin >> number;

		if (number % 2 == 0 && number != 0) {
			cout << "number�� ¦���̴�. " << endl;
		}
		else if (number % 2 == 1 && number != 0)
			cout << "number�� Ȧ���̴�. " << endl;

		else if (number == 0)
		{
			cout << "number�� ¦���� �ƴϰ� Ȧ���� �ƴϴ�." << endl;
		}
	}
}
