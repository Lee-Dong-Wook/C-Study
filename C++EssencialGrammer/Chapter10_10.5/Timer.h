#pragma once
#include <iostream>
#include <vector>		//sort를 위한 라이브러리 
#include <algorithm>	//sort 알고리듬
#include <random>
#include <chrono>		//시간을 재주는 라이브러리

class Timer {

	
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); //시작시간(현재시간) 

public:
	void elapsed() {

		using namespace std;

		std::chrono::time_point<clock_t> end_time = clock_t::now(); //현재시간을 다시 체크 

		//현재시간 - 시작시간 
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};
