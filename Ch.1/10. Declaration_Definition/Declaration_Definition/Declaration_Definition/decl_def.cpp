#include <iostream>

using namespace std;
// 이를 프로토 타입이라 함
int add(int a, int b);  //forward declatation 선언
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

// definition 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}