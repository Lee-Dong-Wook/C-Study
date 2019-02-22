#include <iostream>
using namespace std;

class Simple {

private:
	int _id;

public : 
	Simple(const int &id) : _id(id) {

		cout << " Constructor " << _id << endl;
	}

	~Simple() {

		cout << " Destructor " << _id << endl; 
	}
};

class IntArray
{
private : 
	int *_arr = nullptr;
	int _length = 0;

public :
	IntArray(const int length) {

		_length = length;
		_arr = new int[_length];

		cout << "constructor" << endl; 
	}

	~IntArray() {

		cout << " Destructor " << endl;
		if(_arr != nullptr) 
		delete[] _arr; 
	}

	int getLength() { return _length; }
};

int main(){

	Simple *s1 = new Simple(0);
	Simple s2(1); 
	delete s1;

	while (true) {
		
		IntArray my_arr(10000);
		
	}
}


