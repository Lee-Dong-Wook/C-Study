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

	//���� ����� �ϸ� ��Ÿ�� ���� 
	//cout << v[2] << endl;
	//cout << v.at(2) << endl; 

	//������ 3��° ��Ҹ� ������ �´�. 
	int *ptr = v.data();

	cout << ptr[2] << endl<<endl;

	std::vector<int> stack;

	//�ص��ǰ� ���ص� �ȴ�. �ӵ����̰� Ȯ���� ����. ��� ȣ���� �� stackoverflow�� ����. 
	//���ȣ��� ���� �˰����� ����ؾ��Ѵٸ� vector�� ����ϴ� ����� �ִ�.
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


