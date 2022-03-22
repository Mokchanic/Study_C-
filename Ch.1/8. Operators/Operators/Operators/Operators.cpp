#include <iostream>

using namespace std;

int main()
{
	int x = -2; // x is a variable, 2 is a literal. //등호는 대입연산자(Assignment)라고 한다.

	//cout << x + 2 << endl; // x, 2를 피연산자(Operand)

	//삼항 연산자
	int y = (x > 0) ? 1 : 2; //조건이 참이면 ? 뒤의 1을 거짓이면 2를 실행시키라는 의미.

	cout << y << endl;

	//cout << "Hello, World" << endl;

	return 0;
}