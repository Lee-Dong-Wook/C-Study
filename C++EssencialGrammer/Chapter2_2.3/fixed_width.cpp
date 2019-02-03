#include <iostream>
//#include <cstdint>

int main() {

	using namespace std;

	int16_t i(5); //해당 플랫폼에서 2byte 데이터로 바꿈 
	int8_t myint = 65; //1byte로 정의 

	//int8이라 정수형이 겠지 생각하지만 내부는 char형으로 교체가 되어있다.  

	cout << myint << endl;

	int_fast8_t fi(5); //정수형 중에서 8bit중에서 가장 처리가 빠른 것.
	int_least64_t fl(5); // 적어도 8byte를 가지는 데이터 타입. 

	return 0; 
}