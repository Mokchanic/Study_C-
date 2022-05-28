#include <iostream>

using namespace std;

// 정수를 반환하는 foo 함수
int foo(int x, int y); // 정수형 변수 x, y

int foo(int x, int y)
{
	return x + y;
} // x, y는 함수가 끝남과 동시에 os로 메모리가 반환됨. (지역변수)

int main()
{
	int x =  1, y = 2;
	foo(6, 7); // 6, 7: arguments (actual parameters)
	foo(x, y + 1); // 값만 전달이 되는 것이 아니며 값, 참조, 주소에 의한 전달을 배울 것이다.

	return 0;
}