#include <iostream>

using namespace std;

int getInt() {

	while (true) {

		cout << "Enter a integer number : ";

		int x;
		cin >> x;

		//�Է¹����� �ѵ��� �Ѿ������ ���� �Է��� ��� �Է¹��ۿ����� ����ؼ� ���� �������� �Ѵ�. 
		//�������� ��� ���۸� �ʱ�ȭ�ع�����. 
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			cout << "Invalid operator, please try again" << endl;
		}
		
		else 
			std::cin.ignore(32767, '\n');
			return x;
	}
}

char getOperator() {

	while (true) {

		cout << "Enter an operator (+ , -) : "; //todo : mor operators *, /etc 

		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' || op == '-')  return op;

		else
			cout << "Invalid operator, please try again" << endl; 
	}
}

void printResult(int x, char op, int y) {

	switch (op) {

	case '+' : 
		cout << x + y << endl; break; 

	case '-':
		cout << x - y << endl; break; 

	default: cout << "Invalid operator" << endl;  break;
	}
	
}
int main(){

	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);
}

