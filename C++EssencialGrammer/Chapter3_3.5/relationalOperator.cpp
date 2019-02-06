#include <iostream>
using namespace std;

int main() {

	

			while (true) {

				int x, y;

				cin >> x >> y;

				cout << "Your input values are : " << x << " " << y << endl;

				if (x == 999 || y == 999) {
					break; 
				}

				else if (x == y)
					cout << "equal" << endl;

				else if (x != y)
					cout << "Not equal " << endl;

				else if (x > y)
					cout << "x is greater than y" << endl;

				else if (x < y)
					cout << "x is less than y" << endl;

				if (x >= y)
					cout << "x is greater than y or equal to y" << endl;

				if (x <= y)
					cout << " x is less than or equal to y" << endl;
		}
			cout << endl << endl; 
			
	double d1 = 100 - 99.99; // 0.01 
	double d2 = 10 - 9.99; //0.01

	const double epsilon = 1e-10; 

	/*if (d1 == d2)
		cout << "equal" << endl;
	else {
		cout << "not equal " << endl;
	
		if (d1 > d2) 
			cout << "d1 > d2" << endl; 
		else 
			cout << "d1 < d2" << endl;
	}

	cout << "d1 : " << d1 << endl;
	cout << "d2 : " << d2 << endl;
	cout << "Â÷ÀÌ : " << abs(d1 - d2) << endl; */

	if (abs(d1 - d2) < epsilon)
		cout << " Approximately equal " << endl;

	else
		cout << "Not equal " << endl; 
	return 0; 
		 
}
