#include <iostream>
#include <cstdlib> // std::radn(), std::srand() 
#include <ctime>
#include <random>

using namespace std; 

unsigned int PRNG() { //pseduo Random Number Generator 

	static unsigned int seed = 5523; //seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int getRandomNumber(int min, int max) {

	//RAND_MAX�� �������� ���� ū ���� ��ũ�� ���
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
    
	return min + static_cast<int>((max - min + 1)* (rand() * fraction));
}


int main() {

	//for (int count = 1; count <= 100; ++count) {

	//	cout << PRNG() << "\t";

	//	if (count % 5 == 0) cout << endl; //5�� �� �� �ٲ� 
	//}

	/*cout << endl; */

	//srand(5323); //seed ���� 
	/*srand(static_cast<unsigned int>(time(0)));

	for (int count = 1; count <= 100; ++count) {

		cout << rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}

	cout << endl;*/

	/*srand(5323);
	for (int count = 1; count <= 100; ++count) {

		cout << getRandomNumber(5,8) << "\t";

		if (count % 5 == 0) cout << endl;
	}*/

	std::random_device rd;		//create random variable 
	std::mt19937 mesenne(rd()); //create a mesenne twister , ������ 
	std::uniform_int_distribution<> dice(1, 6); //1~6�� ����, ������ Ȯ�� 

	for (int count = 1; count <= 20; ++count) {

		cout << dice(mesenne) << "\t";

		if (count % 5 == 0) cout << endl;
	}
}


