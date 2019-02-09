#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double x;

tryAgain : //label

	cout << "enter numbmer" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; 

	cout << sqrt(x);
}


