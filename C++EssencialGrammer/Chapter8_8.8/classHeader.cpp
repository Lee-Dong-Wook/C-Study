#include <iostream>
#include "Calc.h"

using namespace std;

int main() {

	Calc cal(10);

	Calc &temp1 = cal.add(5);
	Calc &temp2 = temp1.sub(5);
	Calc &temp3 = temp2.mult(5);
	Calc &temp4 = temp3.div(5);
	temp4.print();

	cal.add(5).sub(5).mult(5).div(5).print();
}

