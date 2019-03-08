#include <iostream>
#include <cassert>
using namespace std;

class InList {

private :
	int _list[10] = {1,2,3,4,5,6,7,8,9,10};

public : 
	void setItem(int index, int value) {

		_list[index] = value; 
	}

	int getItem(int index) {
		
	
		return _list[index];
	}

	int *getList() {

		return _list; 
	}

	//타입의 용도에 따라 변경가능 
	int &operator [] (const int index) {
		
		assert(index >= 0);
		assert(index < 10);
		return _list[index];
	}

	const int &operator [] (const int index) const {

		assert(index >= 0);
		assert(index < 10);
		return _list[index];
	}

};

int main() {

	InList my_list;
	/*my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl; 
	my_list.getList()[3] = 100;
	cout << my_list.getList()[3] << endl; */

	my_list[3] = 100;
	cout << my_list[3] << endl;
	my_list[3] = 200;
	cout << my_list[3] << endl;

	const InList con_list;
	
	//con_list[1] = 100; const 이기 때문에 안된다, 
	cout << con_list[1] << endl; 

	InList *list = new InList;
	//list[3] = 10; no
	(*list)[3] = 10; //ok 

}