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
	for (int i = 0; i < 10; i++) {
		if (1 % 2 == 0) continue;

		cout << i << endl;
	}
}


	int main() {

		//fuc();

		conti();

		return 0;
	}