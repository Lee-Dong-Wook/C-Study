#include <iostream>
using namespace std;

class A;

class B {

private:
	int _value = 2;

public:

	void doSomething(A& a);
};

class A {

private :
	int _value = 1;

	friend void B::doSomething(A& a);

};

void B::doSomething(A& a) {

	cout << a._value << endl;
}

int main(){

	A a;
	B b;
	b.doSomething(a);
}


