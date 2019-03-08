#include <iostream>
using namespace std;

class Accumulator {

private : 
	int _counter = 0;

public : 
	int operator() (int i) { return (_counter += i); }
};
int main()
{
	Accumulator acc;
	cout << acc(10) << endl; //10
	cout << acc(20) << endl; //30 
}

