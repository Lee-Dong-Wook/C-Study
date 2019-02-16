#include <iostream>
#include <vector>

using namespace std;

int main(){

	//동적할당을 하는 메모리이기 때문에 크기를 굳이 적어주지 않아도 된다. 
	std::vector<int> arr; 

	std::vector<int> arr2 = {1,2,3,4,5};
	cout << arr2.size() << endl;

	std::vector<int> arr3 = {1,2,3};
	cout << arr3.size() << endl; 

	std::vector<int> arr4 = { 1,2,3,4,5 };

	for (auto &itr : arr4) {
		cout << itr << " ";
	}
	cout << endl;

	cout << arr4[1] << endl;
	cout << arr4.at(1) << endl<<endl;

 // 장점 : 메모리를 알아서 지워준다는 것. 블록을 빠져나오면 메모리를 알아서 반납해버림.메모리 누수가 없다. 
	//자신의 길이를 기억하고 있고 함수 매개변수로 보내도 길이를 알고 있음 
	//동적 메모리할당을 충분히 사용하는 좋은 거 

	//크기를 다시 할당하는 것도 가능 
	arr4.resize(10);
	for (auto &itr : arr4) {
		cout << itr << " ";
	}

	cout << endl;

	arr4.resize(3);
	for (auto &itr : arr4) {
		cout << itr << " ";
	}
}


