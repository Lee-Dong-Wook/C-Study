
#include <iostream>

using namespace std; 

void doSomething(int x) {

	cout << "In fac " << x << " " << &x << endl; 
}

int main(){

	doSomething(5);

	int y =10;

	doSomething(y);
	cout << "In main " << y << " " << &y << endl;
    
}

