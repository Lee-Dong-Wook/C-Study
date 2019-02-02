#include <iostream>
using namespace std;

int Add(int a, int b);
int Mul(int a, int b);
int Sub(int a, int b);
float Div(float a, float b);

int main()
{
	cout << Add(1, 2) << endl; 
	cout << Mul(1, 2) << endl; 
	cout << Sub(1, 2) << endl;
	cout << Div(1, 2) << endl;

	return 0; 

}

int Add(int a, int b) {

	return a + b;
}

int Mul(int a, int b) {

	return a * b;
}

int Sub(int a, int b) {

	return a - b;
}

float Div(float a, float b) {

	return a / b;
}