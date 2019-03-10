#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray {

private : 
	int _length = 0;
	int *_data = nullptr; 

public :

	//TODO : implement IntArray class 

	//constructor;
	//destructors
	//initialize()
	//reset()
	//resize()
	//insertBefore(const int &value, const int &ix)
	//remove(consst & ix)
	//push_back(const int &value);
};
int main()
{
	std::vector<int> int_vec;
	std::array<int, 10> int_arr;

	//IntArray my_arr { 1, 3, 5, 7, 9};
	//my_arr.insertBefore(10,1); 1, 10, 3, 5, 7, 9
	//my_arr.remove(3)            //1, 10 , 3, 7, 9 
	//my_arr.push_back(13);         // 1 10 3 7 9 13
}

