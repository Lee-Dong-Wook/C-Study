#include <iostream>
using namespace std;

#define MY_NUMBER 9
#define MY_TEXT "hi"
#define APPLE

int main() {

#ifdef APPLE
	cout << "apple is already defined " << endl; 
#endif

#ifndef ORANGE
	cout << "ORANGE is not already defined" << endl;
#endif

	cout << MY_NUMBER << endl; 
	cout << MY_TEXT << endl; 
}
