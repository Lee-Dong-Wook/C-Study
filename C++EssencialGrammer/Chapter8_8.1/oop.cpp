#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Friend Component : name, address, age, height, weight,...
//친구를 만들어 출력한다고 가정 

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

	//친구 1명을 표현 
	jj.print();

	//여러 친구를 표현한다 한다.
	vector<Friend> my_friend;
	my_friend.resize(2);

	for (auto &ele : my_friend) {

		ele.print(); 
	}
	

	





}

