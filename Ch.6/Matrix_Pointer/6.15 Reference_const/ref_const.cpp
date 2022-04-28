#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a); // a를 넣을 때 reference이니 const가 있건 없건 문제가 없다.
	doSomething(1); // const가 있으면 숫자를 넣어도 문제가 없다.
	doSomething(a+3);
	doSomething(a*5);

	return 0;
}