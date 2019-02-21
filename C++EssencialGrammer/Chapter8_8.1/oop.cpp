#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Friend Component : name, address, age, height, weight,...
//ģ���� ����� ����Ѵٰ� ���� 

class Friend {

public :  //access specifier (public, private, protected)

	string name;
	string address;
	int age;
	double height;
	double weight;

	void print() {

		cout << name << address << age << height << weight << endl;
	}
};

int main(){

	Friend jj = {"raynor","seoul",15,167,100};

	//ģ�� 1���� ǥ�� 
	jj.print();

	//���� ģ���� ǥ���Ѵ� �Ѵ�.
	vector<Friend> my_friend;
	my_friend.resize(2);

	for (auto &ele : my_friend) {

		ele.print(); 
	}
	

	





}

