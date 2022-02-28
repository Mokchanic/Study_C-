//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// int x = 123; // x라는 정수형(integer type)변수를 선언했다. x는 객체이며 메모리에 숫자를 담을 수 있는 공간을 차지했다. 크기는 123이라는 정수를 담을 수 있는 크기.
//	// 위처럼 사용을 해도 되고 아래처럼 사용을 해도 됨.	
//	int x;
//	x = 123; // assignment operator라고 부름. 대입연산자.
//
//	cout << x << endl;  // x는 이름. 메모리 공간에 대한 주소.
//	cout << &x << endl; // & ampersand: x의 주소를 보여줌.
//
//	int y;
//	y = 456; // 왼쪽에 있는 주소를 가지고 있는 y를 L-values라고 하고, 오른쪽을 R-values라고 하며 잠깐 작동을 하고 사라짐.
//
//	int z;
//	z = z + 2; // 이런경우 z+2의 z는 값이 R-values로 나옴. 조금 헷갈리므로 메모리 공간의 개념이 잘 잡힌다면 이해할 수 있을 것.
//
//	return 0;
//}