#pragma once
#include <iostream>
class Calc {

private:
	int _value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mult(int value);
	Calc& div(int value);
	
	void print(); 
};