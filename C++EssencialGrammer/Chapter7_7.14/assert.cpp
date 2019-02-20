#include <iostream>
#include <cassert>
#include <array>

using namespace std;

//void printValue(const std::array<int, 5> array, int ix) {
//
//	assert(ix >= 0);
//	assert(ix <= array.size() - 1);
//
//	cout << array[ix] << endl; 
//}

int main(){

	//int number = 5; 

	////number = 15; 

	//assert(number == 5);

	//cout << "정상 작동" << endl; 

	/*std::array<int, 5> my_array{ 1,2,3,4,5 };
	
	printValue(my_array,100);*/

	//const int x = 10;
	const int x = 5;

	static_assert(x == 5, "x should be 5");
	cout << "정상 작동" << endl;

	return 0; 
}

