#include <iostream>
#include <string>

using namespace std;

class Something {

public : 
	/*int _value = 0;*/

	//숨어있는 복사 생성자 
	/*Something(const Something &st_in) {

		_value = st_in._value;

		cout << "Copy Constructor" << endl; 
	}*/

	/*Something() {

		cout << "constructor" << endl; 
	}
*/
	/*void setValue (int value)  { _value = value; }

	int getValue() const { return _value; }*/

	string _value = "default"; 

	string &getValue() { cout << "nomal get value : "<<endl; return _value; }

	const string &getValue() const { cout << "const get value : " << endl;  return _value; }
};

//void print(const Something &st) {
//
//	cout << st._value << endl; 
//	cout << "print : " << &st << endl;
//}
int main(){

	/* Something something; 

	print(something);

	cout << "main : " << &something << endl; */

	Something st1;
	st1.getValue();

	const Something st2;
	st2.getValue();

	return 0; 
}

