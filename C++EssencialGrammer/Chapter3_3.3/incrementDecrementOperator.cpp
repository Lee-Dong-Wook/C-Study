#include <iostream>
using namespace std;

int main() {

	int x = 5;
	int y = ++x; //(++x) x�� ���� ���� ��Ų��. 
	int z = x++;
	cout << y << endl;  // 6 
	cout << z << endl<<endl;  // y�� �̹� x�� ���� ���ױ� ������ 6�� ��� 

	int a = 6; 
	int v = a++; //(a++) a�� ���� ó���ϰ� ������Ų��. 
	int q = v; 
	cout << a << endl;  //int v= a++�� �߱� ������ 6->7�̵� ���� 
	cout << v << endl;  //a�� 7�� �����ϱ� ���� a���� v�� ���� 
	cout << q << endl;  //6�� ����� v�� ���� q������ 

	int xx = 6, yy = 6; 
	cout << xx << " " << yy << endl;
	
	// 7 5 
	//cout << ++xx << " " << --yy << endl; 
	
	// 6 6 <- xx,yy�� ���� ����� ��. ������ �� �ڿ� �� 
	cout << xx++ << " " << yy-- << endl; 
	
	//7 5  
	cout << xx << " " << yy << endl; 

	return 0; 
}