#include <iostream>

using namespace std; 

int main(){

		////syntax error �������� 
		//int x

		////semantic error �ǹ̿��� 
		////x�� 5���� Ŭ �� ����ε� ���ǽĿ����� 5�� �����Ѵ�. �� ���� 
		//int x;
		//cin >> x;

		//if (x >= 5)
		//cout << "x is greater than 5" << endl; 

		//violated assumption ����ڰ� �ǵ��� ������ ����Ѵ�. 
		//hello string �� ���̴� 6 ������ ����ڰ� ix�� 6 �Ѿ�� ���ڸ� �Է� ���ϸ����� ���� ���Ѵ�. 
		//1024�� �Է��ϸ� ��Ÿ�� ���� �߻� 
		string hello = "raynor";

		cout << "Input form 0 to" << hello.size() - 1 << " " << endl; 

		while (true) {

			int ix;
			cin >> ix;
			if (ix >= 0 && ix <= hello.size() - 1)
				cout << hello[ix] << endl;

			else
				cout << "plz try agin" << endl;

		}
	


}
