#pragma once
#include <iostream>
#include <vector>		//sort�� ���� ���̺귯�� 
#include <algorithm>	//sort �˰���
#include <random>
#include <chrono>		//�ð��� ���ִ� ���̺귯��

class Timer {

	
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now(); //���۽ð�(����ð�) 

public:
	void elapsed() {

		using namespace std;

		std::chrono::time_point<clock_t> end_time = clock_t::now(); //����ð��� �ٽ� üũ 

		//����ð� - ���۽ð� 
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};
