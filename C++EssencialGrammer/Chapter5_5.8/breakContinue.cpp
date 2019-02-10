#include <iostream>
using namespace std; 

void fuc() {
	
	char ch;

	while (true) {

		cout << "조건문 들어옴" << endl; 
		cout << "입력";
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

		cout << "조건문 나옴" << endl<<endl;
	}

	cout << "while 문 나옴" << endl<<endl; 
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

		cout << "입력 : ";
		cin >> ch;

		cout << "x가 입력되면 나간다." << endl;

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

		cout << "나왔네";

		return 0;
	}