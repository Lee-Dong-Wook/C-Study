#include <iostream>
using namespace std; 

void fuc() {
	
	char ch;

	while (true) {

		cout << "���ǹ� ����" << endl; 
		cout << "�Է�";
		cin >> ch;

		cout << ch << endl;

		if (ch == 'r') {
			
			cout << "R" << endl;
			return;
		}

		if (ch == 'b') {

			cout << "B" << endl;
			break; 
		}

		cout << "���ǹ� ����" << endl<<endl;
	}

	cout << "while �� ����" << endl<<endl; 
}

void conti() {
	for (int i = 0; i < 10; ++i) {

		if (i % 2 == 0) continue;

		cout << i << endl;
	}
}

void doConti() {

	int count = 0;

	do {
		if (count == 5)
			continue;

		cout << count << endl; 

	} while (++count < 10);
}

void breakwhile() {

	char ch;
	bool isEscape = false;

	while (!isEscape) {

		cout << "�Է� : ";
		cin >> ch;

		cout << "x�� �ԷµǸ� ������." << endl;

		if (ch == 'x') {
			isEscape = true;
		}
	}
}

	int main() {

		//fuc();

		//conti();
		
		//doConti();

		//breakwhile();

		cout << "���Գ�";

		return 0;
	}