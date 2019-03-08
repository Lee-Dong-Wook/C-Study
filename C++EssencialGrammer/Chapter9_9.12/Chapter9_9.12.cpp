#include <iostream>
#include <cassert>
#include <initializer_list>
using namespace std;

class IntArray {

private : 
	unsigned _length = 0;
	int *_data = nullptr;

public : 
	IntArray(unsigned length):_length(length){
	
		_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list) : IntArray(list.size()) {

		int count = 0;
		for (auto &element : list) {
			_data[count] = element;
			++count;
		}


		//for (unsigned count = 0; count < list.size(); ++count) {
		//	_data[count] = list[count]; //error
		//}

	}

	~IntArray() {delete[] this->_data;}

	friend ostream & operator << (ostream &out, IntArray &arr) {

		for (unsigned i = 0; i < arr._length; ++i) {
			out << arr._data[i] << " "; 	 
		}
		out << endl;
		return out;
	}
};
int main()
{
	//�⺻�ڷ��� -> �����̳� �����Ҵ����� �ʱ�ȭ�� ����
	int _arr1[5] = { 1,2,3,4,5 };
	int *_arr2 = new int[5]{ 1,2,3,4,5, };

	//auto�� �ڷ����� �̴ϼȶ����� ����Ʈ�� �ڵ����� ��´�. 
	auto il = { 10,20,30 };

	IntArray int_array = { 1,2,3,4,5 };
	cout << int_array << endl;
	
	return 0;
}

