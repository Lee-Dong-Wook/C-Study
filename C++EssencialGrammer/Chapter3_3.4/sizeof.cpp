#include <iostream>
using namespace std;

int getPrice(bool onSale) {

	if (onSale == true)
		return 10;
	else
		return 100; 
}
int main() {

	float a,b; 

	sizeof(float); // 4byte 
	sizeof(a); // 4byte
	sizeof b;

	//comma operator
	int x = 3;
	int y = 10;
	int z = (++x, ++y); //++x; ++y; z = y; 

	cout << x << " " << y << " " << z << endl; 

	//comma operator warning
	int value1 = 1, value2 = 2; 

	int value3;

	value3 = value1, value2;

	cout << value3 << endl; 

	//conditional operator (arithmetric if)
	
	bool onSale = false;

	//const int price = (onSale == true) ? 10 : 100; 
	
	const int price = getPrice(onSale);

	cout << price << endl; 

	int value4 = 5;
	cout << ((value4 % 2 == 0) ? "even" : "odd") << endl;
	
	return 0;
}