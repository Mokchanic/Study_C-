#include <iostream>

using namespace std;

// ������ ��ȯ�ϴ� foo �Լ�
int foo(int x, int y); // ������ ���� x, y

int foo(int x, int y)
{
	return x + y;
} // x, y�� �Լ��� ������ ���ÿ� os�� �޸𸮰� ��ȯ��. (��������)

int main()
{
	int x =  1, y = 2;
	foo(6, 7); // 6, 7: arguments (actual parameters)
	foo(x, y + 1); // ���� ������ �Ǵ� ���� �ƴϸ� ��, ����, �ּҿ� ���� ������ ��� ���̴�.

	return 0;
}