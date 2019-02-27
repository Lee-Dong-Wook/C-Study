#include <iostream>
#include <vector>		//sort를 위한 라이브러리 
#include <algorithm>	//sort 알고리듬
#include <random>
#include <chrono>		//시간을 재주는 라이브러리

using namespace std;

class Timer {

	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); //시작시간(현재시간) 

public:
	void elapsed() {

		std::chrono::time_point<clock_t> end_time = clock_t::now(); //현재시간을 다시 체크 

		//현재시간 - 시작시간 
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl; 
	}
};

int main(){

	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() }; //랜덤 생성기 

	vector<int> vec(100000);
	for (unsigned int i = 0; i < vec.size(); i++) {
		vec[i] = i; 
	}

	std::shuffle(begin(vec), end(vec), mersenne_engine); //섞기 

	//for (auto &e : vec) { cout << e << " "; }

	cout << endl; 

	Timer timer;

	std::sort(begin(vec), end(vec)); //정렬 
 
	timer.elapsed();  //시간 출력 

	//for (auto & e : vec) { cout << e << " "; }
	cout << endl; 

	return 0;

}

