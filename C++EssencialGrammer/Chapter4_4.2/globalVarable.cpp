#include <iostream>
#include "MyConstants.h"
using namespace std;

extern void doSomething();

extern int a; 

int main() {

	doSomething();

	cout << a << endl; 

	cout << "In globalVariable.cpp file : " << Constants::pi <<"�޸� �ּ� : "<< &Constants::pi  <<endl;
}