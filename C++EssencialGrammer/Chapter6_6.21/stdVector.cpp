#include <iostream>
#include <vector>

using namespace std;

int main(){

	//�����Ҵ��� �ϴ� �޸��̱� ������ ũ�⸦ ���� �������� �ʾƵ� �ȴ�. 
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

 // ���� : �޸𸮸� �˾Ƽ� �����شٴ� ��. ����� ���������� �޸𸮸� �˾Ƽ� �ݳ��ع���.�޸� ������ ����. 
	//�ڽ��� ���̸� ����ϰ� �ְ� �Լ� �Ű������� ������ ���̸� �˰� ���� 
	//���� �޸��Ҵ��� ����� ����ϴ� ���� �� 

	//ũ�⸦ �ٽ� �Ҵ��ϴ� �͵� ���� 
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


