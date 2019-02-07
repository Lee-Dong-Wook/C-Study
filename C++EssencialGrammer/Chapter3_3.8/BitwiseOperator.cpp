#include <iostream>
#include <bitset>
using namespace std;

int main(){
    
	// << left shift
	// >> right shift
	// ~(NOT), &(AND), |(OR), ^(XOR)���ǿ����ڿ��� ������ ��Ʈ�����ڿ��� �ִ�.

	unsigned int a = 1; 
	unsigned int b = 4;
	
	//a,b�� ���������� ��� ����Ǵ��� Ȯ�ΰ����ϴ�. 
	cout << "a : "<< bitset<8>(a) << endl; //0001
	cout << "b : " << bitset<8>(b) << endl << endl; //0100

	//left shift operator  
	unsigned int c = 5;
	unsigned int d = c << 1; 
	cout <<"c : " << bitset<8>(c) <<" 10���� : " << c << endl; //0101 5
	cout <<"d : "<< bitset<8>(d) << " 10���� : " << d << endl << endl; //1010 10

	unsigned int e = c << 2; 
	cout << "c : " << bitset<8>(c) << " 10���� : " << c << endl; //0101 5
	cout << "d : " << bitset<8>(e) << " 10���� : " << e << endl << endl; //10100 20

	//right shift operator 
	unsigned int f = 1024; 
	
	cout << bitset<16>(f) << " 10���� : "  << f <<  endl;            //1024
	cout << bitset<16>(f >> 1) << " 10���� : " <<  (f >> 1) << endl; // 512
	cout << bitset<16>(f >> 2) << " 10���� : " <<  (f >> 2) << endl; // 256
	cout << bitset<16>(f >> 3) << " 10���� : " <<  (f >> 3) << endl; // 128
	cout << bitset<16>(f >> 4) << " 10���� : " <<  (f >> 4) << endl<<endl; //  64 
	
	//bitwise not 
	cout << bitset<16>(f) << " 10���� : " << f << endl;     //0000010000000000 10���� : 1024
	cout << bitset<16>(~f) << " 10���� : " << (~f) << endl << endl; //1111101111111111 10���� : 4294966271
	
	unsigned int g = 0b1100; //12
	unsigned int h = 0b0110; //6 

	cout << g << " " << h << endl << endl;
	cout << bitset<4>(g&h) << endl; //AND
	cout << bitset<4>(g|h) << endl; //OR
	cout << bitset<4>(g^h) << endl; //XOR

	return 0;
}

