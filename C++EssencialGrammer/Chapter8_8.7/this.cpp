#include <iostream>

using namespace std; 

class Simple {

private : 
	int _id; 

public : 
	Simple(int id) {

		this->setID(id); //this가 생략가능
		this->_id; 

		cout << " 자기 자신의 주소 : " << this << endl;
	}

	void setID(int id) {_id = id;}
	int getID() { return _id; }

};

class Calc {

private : 
	int _value; 


public : 
	Calc(int init_value) {

		_value = init_value;
	}

	Calc& add(int value) { _value += value; return *this;}
	Calc& sub(int value) { _value -=value; return *this;}
	Calc& mult(int value) { _value *=value; return *this;}
	Calc& div(int value) { _value /=value; return *this;}

	void print() {
		cout << _value << endl; 
	}
};

int main(){
 
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(3);

	cout << "main에서 주소찍기 : " << "s1: " << &s1 << " s2 : " << &s2 << endl; 

	Calc cal(10);
	Calc &temp1 = cal.add(5);
	Calc &temp2 = temp1.sub(5);
	Calc &temp3 = temp2.mult(5);
	Calc &temp4 = temp3.div(5);
		  temp4.print();

	cal.add(5).sub(5).mult(5).div(5).print();

}

