#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

class Mystring {

public:
	char *_data = nullptr;
	int _length = 0;
	
public : 
	Mystring(const char *source = "") {

		//문자열이 비지 않았는가? 
		assert(source);

		//문자열의 길이. +1이유는 문자열의 마지막을 표현하는 \0을 집어넣기 위함.  
		_length = std::strlen(source) + 1;

		//글자 길이만큼 _data에 동적할당
		_data = new char[_length];

		for (int i = 0; i < _length; i++) {
			_data[i] = source[i];
		}

		_data[_length - 1] = '\0';
	}

	//copy constructor 자기 자신이 매개변수로 들어간다 
	Mystring(const Mystring &source) {

		cout << "copy constructor" << endl; 

		//복사를 하는 것이라 메모리가 따로 잡는다. 
		_length = source._length;
		
		//source가 데이터를 가지고 있을 경우 
		//메모리를 할당 받고 source가 가지고 있는 것을 복사한다. 
		if (source._data != nullptr) {

			_data = new char[_length];

			for (int i = 0; i < _length; i++) {
				_data[i] = source._data[i];
			}
		}
		else
			_data = nullptr; 
	}

	Mystring & operator = (const Mystring &source) {

		cout << "Assignment operator" << endl; 

		if (this == &source) //prevent self - assignment
			return *this;

		delete[] _data;

		_length = source._length;

		if (source._data != nullptr) {

			_data = new char[_length];

			for (int i = 0; i < _length; i++) {
				_data[i] = source._data[i];
			}
		}

		else {
			_data = nullptr;
		}
			
		return *this; 	
	}

	~Mystring() {

		delete[] _data;
	}

	char *getString() { return _data; }
	int getLength() { return _length; }
};

int main(){

	Mystring hello("hello");

	/*cout << (int*)hello._data << endl;
	cout << hello.getString() << endl;

	{
		Mystring copy = hello;
		cout << (int*)copy._data << endl; 
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl; */

	Mystring str1 = hello;

	Mystring str2;
	str2 = hello;
}

