#include <iostream>
using namespace std;

//이름이 같은 경우 충돌할 경우를 대비하여 namespace 구간을 나눈다. 
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

//c++ 17에 생긴 새로운 기능 
// 매우 보기가 힘들다. 
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
// 축약이 가능하다. 
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

	//apple이 지역변수로 선언되었기 때문에 접근 가능하다. 중괄호 밖을 나가면 apple에 접근할 수 없다. 
	apple = 1;

	cout << apple << endl;

	{
		//apple와 다시 선언된 apple은 엄연히 다르며 메모리를 할당받는 지속시간도 다르다. 
		int apple = 2; 
		cout << apple << endl;
	}

	cout << apple << endl;
	
	work1::a;
	work1::doSomething();
	
	work2::a;
	work2::doSomething();

	//편해졌긴 하나 이러한 방식은 좋지못하다. 범위를 적게 하는 것이 좋다. 
	work3::work33::work333::a;
	work3::work33::work333::doSomething();
	return 0;
}


