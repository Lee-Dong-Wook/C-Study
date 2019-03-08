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

		//���ڿ��� ���� �ʾҴ°�? 
		assert(source);

		//���ڿ��� ����. +1������ ���ڿ��� �������� ǥ���ϴ� \0�� ����ֱ� ����.  
		_length = std::strlen(source) + 1;

		//���� ���̸�ŭ _data�� �����Ҵ�
		_data = new char[_length];

		for (int i = 0; i < _length; i++) {
			_data[i] = source[i];
		}

		_data[_length - 1] = '\0';
	}

	//copy constructor �ڱ� �ڽ��� �Ű������� ���� 
	Mystring(const Mystring &source) {

		cout << "copy constructor" << endl; 

		//���縦 �ϴ� ���̶� �޸𸮰� ���� ��´�. 
		_length = source._length;
		
		//source�� �����͸� ������ ���� ��� 
		//�޸𸮸� �Ҵ� �ް� source�� ������ �ִ� ���� �����Ѵ�. 
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

