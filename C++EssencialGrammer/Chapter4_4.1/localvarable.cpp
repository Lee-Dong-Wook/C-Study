#include <iostream>
using namespace std;

//�̸��� ���� ��� �浹�� ��츦 ����Ͽ� namespace ������ ������. 
namespace work1 {
	int a = 1;
	void doSomething() {
		a += 3;
		cout << a << endl;
	}
}

namespace work2 {
	int a = 1;
	void doSomething() {
		a += 4;
		cout << a << endl;
	}
}

//c++ 17�� ���� ���ο� ��� 
// �ſ� ���Ⱑ �����. 
//namespace work3 {
//	namespace work33 {
//		namespace work333 {
//			int a = 1;
//			void doSomething() {
//				a += 2;
//				cout << a << endl;
//			}
//		}
//	}
//}
// ����� �����ϴ�. 
namespace work3 :: work33 :: work333{
			int a = 1;
			void doSomething() {
				a += 2;
				cout << a << endl;
			}
}

int main()
{
	int apple = 5; 

	//apple�� ���������� ����Ǿ��� ������ ���� �����ϴ�. �߰�ȣ ���� ������ apple�� ������ �� ����. 
	apple = 1;

	cout << apple << endl;

	{
		//apple�� �ٽ� ����� apple�� ������ �ٸ��� �޸𸮸� �Ҵ�޴� ���ӽð��� �ٸ���. 
		int apple = 2; 
		cout << apple << endl;
	}

	cout << apple << endl;
	
	work1::a;
	work1::doSomething();
	
	work2::a;
	work2::doSomething();

	//�������� �ϳ� �̷��� ����� �������ϴ�. ������ ���� �ϴ� ���� ����. 
	work3::work33::work333::a;
	work3::work33::work333::doSomething();
	return 0;
}


