#include <iostream>

using namespace std;

void doSomething(int y) // 내부적으로 y가 선언되어 값 5가 복사됨.
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	doSomething(x); // 실제로 x라는 변수가 전달이 되는것이 아닌, 값만 전달됨.
					// 그러므로 주소는 main과 다르게 나올 것이다.
	doSomething(x + 1);
}