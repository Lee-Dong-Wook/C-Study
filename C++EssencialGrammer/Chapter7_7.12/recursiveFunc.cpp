#include <iostream>

using namespace std;

void countDown(int count) {

	cout << count << endl;
	if (count > 0) {

		countDown(count - 1);
	}
}

int sumTo(int sum) {
	
	if (sum <= 0)
		return 0;

	else if (sum <= 1)
		return 1;

	else {

		const int s_sum = sumTo(sum - 1);

		return s_sum + sum;
	}
	
}

int main(){

	countDown(5);
	cout << sumTo(10) << endl;

}

