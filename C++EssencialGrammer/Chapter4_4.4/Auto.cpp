#include <iostream>
using namespace std;

auto add(int a, int b) {

	//리턴할 때 캐스팅을 하면 다른 자료형으로 리턴이 가능하다.. 
	return a + (double)b; 
}

int main(){
	
	auto a = 123;
	auto b = 123.0;
	auto c = 1 + 2.0; 

	//캐스팅된 값이 적용되어 double 형이 변한다. 
	auto result = add(1,2);

	return 0; 
}

