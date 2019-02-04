#include <iostream>
using namespace std;

int main() {

	int x = 5;
	int y = ++x; //(++x) x를 먼저 증가 시킨다. 
	int z = x++;
	cout << y << endl;  // 6 
	cout << z << endl<<endl;  // y가 이미 x를 증가 시켰기 때문에 6을 출력 

	int a = 6; 
	int v = a++; //(a++) a를 먼저 처리하고 증가시킨다. 
	int q = v; 
	cout << a << endl;  //int v= a++을 했기 때문에 6->7이된 상태 
	cout << v << endl;  //a가 7로 증가하기 전에 a값을 v에 저장 
	cout << q << endl;  //6이 저장된 v의 값을 q에저장 

	int xx = 6, yy = 6; 
	cout << xx << " " << yy << endl;
	
	// 7 5 
	//cout << ++xx << " " << --yy << endl; 
	
	// 6 6 <- xx,yy를 먼저 출력을 함. 연산은 그 뒤에 됨 
	cout << xx++ << " " << yy-- << endl; 
	
	//7 5  
	cout << xx << " " << yy << endl; 

	return 0; 
}