#include <iostream>
using namespace std;

auto add(int a, int b) {

	//������ �� ĳ������ �ϸ� �ٸ� �ڷ������� ������ �����ϴ�.. 
	return a + (double)b; 
}

int main(){
	
	auto a = 123;
	auto b = 123.0;
	auto c = 1 + 2.0; 

	//ĳ���õ� ���� ����Ǿ� double ���� ���Ѵ�. 
	auto result = add(1,2);

	return 0; 
}

