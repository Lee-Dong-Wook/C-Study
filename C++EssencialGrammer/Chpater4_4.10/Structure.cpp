#include <iostream>
#include <string>

using namespace std;

struct Person {
	
	double height = 177.0;
	float weight = 70.0f;
	int age = 25;
	string name = "Raynor";
	
	void print() {

		cout << height << " " << weight << " " << age << " " << name << endl << endl;
	}
};

struct Employee { //���� �Ѹ��� �ʿ��� �����Ϳ뷮 = 2+ 4+ 8 = 14byte

	short	id;		//2byte
	int		age;	//4byte
	double	wage;	//8byte
};

int main() {

	Person me;

	cout << me.name << endl; 

	cout << sizeof(Employee) << endl; //16�� ��� 
	//��ǻ�Ͱ� �����͸� ����ϰ� ������ �� 2byte�� ���� ó���� ����. �׷��� 2byte �ڿ� 2byte�� �������� ó������
	//���� �Ѹ��� �ʿ��� �����Ϳ뷮 = 2+ (����2)+ 4+ 8 = 16byte => padding 
	
	return 0; 
}