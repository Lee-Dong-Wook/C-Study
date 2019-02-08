#include <iostream>
#include <cstdint>
#include <vector>

int main(){
  
	using namespace std; 

	//double 형을 거리로 사용할 거다. 
	typedef double distance_t;

	//고정 너비 정수 
	int8_t i = 97; 

	//컴파일러 입장에서는 같은 double 이지만 개발자 편의상 사용 
	double		my_distance;
	distance_t  home2work;
	distance_t  home2school; 

	vector<pair<string, int>> pairlist;

	typedef vector<pair<string, int>> pairlist_t;

	pairlist_t pairlist_one; 
	pairlist_t pairlist_two;
	pairlist_t pairlist_three;

	//변수에 대입을 하는 것처럼 보이지만 메모리 공간을 할당하는 것이고 
	// 컴파일러에게 표현하기 위해 이렇게 이름을 쓰겠다.
	using pairlist_f = vector<pair<string, float>>;



    



}


