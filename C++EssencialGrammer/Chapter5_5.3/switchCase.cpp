#include <iostream>

using namespace std;

enum Color {

	Red,Blue,Green,Yello
};

void printColor(Color color) {

	switch (static_cast<int>(color)) {

	case 0 :
		cout << "Red" << endl; break;

	case 1 :
		cout << "Blue" << endl; break;

	case 2 : 
		cout << "Green" << endl; break;
		
	case 3 : 
		cout << "Yello" << endl; break;
	}
}

int main(){

	
	int x;
	cin >> x; 

	{
		int b = 5;

		switch (x) {

		case 0:
			break;

		case 1:

			cout << b << endl; break;
		}
	}
}



