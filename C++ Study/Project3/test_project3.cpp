#include <iostream>
using namespace std; 

void DoSomething(int x) {

	x = 123;
	cout << x << endl; //#2
}


int main() {
	int x = 0;

	cout << x << endl;
	cout << &x << endl;
	{
		int x = 1;
		cout << x << endl;
		cout << &x << endl;
	}

	{
		int x = 2; 
		cout << x << endl;
		cout << &x << endl;
	}

	int y = 0;
	cout << y << endl; 
	cout << &y << endl;
	{
		y = 1;  
		cout << y << endl;
		cout << &y << endl;
	}
	cout << y << endl;
	cout << &y << endl;

	int z = 0;
	cout << z << endl; //#1
	DoSomething(z);
	cout << z << endl; //#3
}
