#include <iostream>
using namespace std; 

int main() {

	char c1 = 65;
	char c2 = 'A';

	//A A 65 65 
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl << endl;
	
	//c - style casting(���� Ÿ�Ժ�ȯ)
	cout << (char)65 << endl; 
	cout << (int)'A' << endl;
	cout << endl;

	//c++ - style casting (���� Ÿ�Ժ�ȯ)
	//65�� char�� �ٲٴ� ���� �ƴ� �ƽ�Ű �ڵ�ǥ���� 65�� �ش� �� ���ڸ� ����Ѵ�.
	cout << char(65) << endl; 
	cout << int('A') << endl;
	cout << endl;
	
	//(�⺻Ÿ�԰� Ÿ�Ժ�ȯ�ϱ� ���� �־� �����Ϸ����� ������ ������ Ȯ�� �� ĳ����)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl << endl;

	char ch = 97;
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl << endl;

	char ch2 = 65;
	
	cin >> ch2; 

	cout << ch2 << " " << static_cast<int>(ch2) << endl << endl;
 
	cout << sizeof(char) << endl;

	//��� ���ڸ� ǥ���� �� ���� ������ ĳ������ ���ش�
	cout << (int)numeric_limits<char>::max() << endl;
	cout << (int)numeric_limits<char>::lowest() << endl<< endl;

	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::lowest() << endl << endl;

	// \n�� �ܼ� �ٹٲ�, endl�� cout ���ۿ��ִ� ��� ���ڸ� ����϶�, �����.
	// ����� ������� std::flush�� �ִµ� �ٹٲ��� ���� �ʰ� ���۸� ���� ������ �Ѵ�. 
	cout << int('\n') << endl;
	cout << int('\t') << endl;
	cout << int('\a') << endl;

	//����ǥ�� ����ϱ� ���ؼ��� \" �� �ؾ߸� ����� �� �ִ�.
	cout << "\"�ȳ��ϼ���\"" << endl; 

	//�׿� ������ ��
	wchar_t c;  //������ �÷��� �� 
	char32_t c1; //�ƽ�Ű�ڵ� ���� �����ڵ带 ���� �� �� ����. 4byte�� char 
	
}