#include <iostream>

using namespace std;

void doSomething(int y) // ���������� y�� ����Ǿ� �� 5�� �����.
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;

	doSomething(x); // ������ x��� ������ ������ �Ǵ°��� �ƴ�, ���� ���޵�.
					// �׷��Ƿ� �ּҴ� main�� �ٸ��� ���� ���̴�.
	doSomething(x + 1);
}