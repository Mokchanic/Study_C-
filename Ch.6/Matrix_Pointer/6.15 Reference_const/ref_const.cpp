#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a); // a�� ���� �� reference�̴� const�� �ְ� ���� ������ ����.
	doSomething(1); // const�� ������ ���ڸ� �־ ������ ����.
	doSomething(a+3);
	doSomething(a*5);

	return 0;
}