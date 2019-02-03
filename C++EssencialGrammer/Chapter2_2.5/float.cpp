#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {

	float f;
	double d; 
	long double ld;
	
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;

	//double �� long double�� ������? 

	cout << numeric_limits<float>::max() << endl; //����ū�� 
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	cout << endl;

	cout << numeric_limits<float>::min() << endl; //���� ���� ���� ����
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	cout << endl; 

	cout << numeric_limits<float>::lowest() << endl;//���� ���� �� 
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	cout << endl;

	f = 3.14f; //3.14 = 31.4 * 0.1
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl; // e�� 10^-1 
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;
	cout << endl;

	cout << setprecision(16) << endl; 
	cout << 1.0 / 3.0 << endl;
	cout << endl;

	f = 123456789.0f; //10 significant digit 
	cout << setprecision(9) << endl; //���� �߻� ���е��� ���� �� �� �ִ�. 
	cout << f << endl; 

	d = 0.1; 
	cout << setprecision(17) << endl; //0.1�� ���� ����� ���� ��µȴ�. 
	cout << d << endl;

	double d1 = 1.0;
	double d2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	//d1�� d2�� ������? 
	cout << d1 << endl; // 1
	cout << d2 << endl; // 0.99999999999999..89

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero; 
	double nan = zero / zero; 
	cout << endl;

	cout << posinf << endl; //inf
	cout << neginf << endl; //-inf
	cout << nan << endl;    //-nan(ind) ind = indeterminate ���� �� �� ����. 
	cout << endl;

	//nan����, inf���� �˱� ���ؼ��� cmath ����� �ʿ��ϴ�. 
	//����� 1,0 T/F�� ���´�. 
	cout << posinf << " " << isnan(posinf) << endl; 
	cout << neginf << " " << isnan(neginf) <<endl; 
	cout << nan << " " << isnan(nan) << endl;    
}