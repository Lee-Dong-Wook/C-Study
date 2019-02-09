#include <iostream>
using namespace std; 

void fuc() {
	
	char ch;

	while (true) {

		cout << "Á¶°Ç¹® µé¾î¿È" << endl; 
		cout << "ÀÔ·Â";
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

		cout << "Á¶°Ç¹® ³ª¿È" << endl<<endl;
	}

	cout << "while ¹® ³ª¿È" << endl<<endl; 
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