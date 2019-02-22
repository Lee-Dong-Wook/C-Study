#include <iostream>

using namespace std;

class Something {

public :
	static int s_value; 
};

int Something::s_value = 1; 

int main(){

	cout << "s_value : " << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	st1.s_value = 1;
	st2.s_value = 2;
	
	cout <<"st1 : "<< &st1.s_value << " " << st1.s_value << endl;
	cout <<"st2 : "<< &st2.s_value << " " << st2.s_value << endl;


	Something::s_value = 1024;
	cout << "s_value : " << &Something::s_value << " " << Something::s_value << endl;

	cout <<"st1 : "<< &st1.s_value << " " << st1.s_value << endl;
	cout <<"st2 : "<< &st2.s_value << " " << st2.s_value << endl;
}

