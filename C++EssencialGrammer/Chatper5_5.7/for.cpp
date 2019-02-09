#include <iostream>

int main(){

	using namespace std;

	for (int count = 0; count < 10; count++) { //iteration 
		
		cout << count << endl; 
	}

	/*¹«ÇÑ for¹® 
	while(true);*/
	int i = 0; 
	for (; true; i++) {

		cout << i << endl;
	}

	int x = 0;
	int y = 0; 
	for (x,y; x < 10; x++, y++)
	{
		cout << x <<" "<< y << endl; 
	}
}

