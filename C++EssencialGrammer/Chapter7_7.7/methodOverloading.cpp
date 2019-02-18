#include <iostream>
#include <string>

using namespace std;

int add(int x, int y) {
	
	return x + y; 
}

//int getRandom(int x) {}

//double getRandom(double x) {}

void getRandom(int &x) {}

void getRandom(double &x) {}

double add(double x, double y) {

	return x + y; 
}

typedef int my_int;

//void print(int x) {}
//void print(my_int x) {}

//void print(const char *value);
//void print(int value);

void print(unsigned int value) {}
void print(float value) {}

int main(){

	print('a');
	print(0);
	print(3.14512);

	/*print(0);
	print('a');
	print("a");
*/
	//cout << add(1, 2) << endl;
	//cout << add(3.0, 4.0) << endl;
	
	int x;

	getRandom(x);
	
	return 0; 



}


