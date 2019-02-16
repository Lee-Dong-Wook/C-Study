#include <iostream>
using namespace std;

void doSomething(const int &x) {

	cout << x << endl; 
}

int main(){
   
	const int &ref_x = 5+3;

	cout << ref_x << endl;
	cout << &ref_x << endl; 

	int a = 1;
	doSomething(a);
	doSomething(1);
	doSomething(a+1);
	doSomething(3*4);

	return 0;
}
