#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack) {

	for (auto e : stack)
	{
		cout << e << " ";
	}

	cout << endl;
}

int main(){

	// int *v_ptr = new int[3]{1,2,3};
	std::vector<int> v{ 1,2,3 };

	v.reserve(1024);
	
	for (auto e : v)
	{
		cout << e << " ";
	}

	cout << endl; 

	cout << v.size() <<" "<< v.capacity()<< endl;

	//강제 출력을 하면 런타임 에러 
	//cout << v[2] << endl;
	//cout << v.at(2) << endl; 

	//강제로 3번째 요소를 가지고 온다. 
	int *ptr = v.data();

	cout << ptr[2] << endl<<endl;

	std::vector<int> stack;

	//해도되고 안해도 된다. 속도차이가 확연히 난다. 재귀 호출할 때 stackoverflow가 난다. 
	//재귀호출과 같은 알고리즘을 사용해야한다면 vector를 사용하는 방법이 있다.
	//stack.reserve(1024);

	stack.push_back(1);
	printStack(stack);

	stack.push_back(2);
	printStack(stack);
	
	stack.push_back(3);
	printStack(stack);

	stack.pop_back();
	printStack(stack);
	
	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0; 
}


