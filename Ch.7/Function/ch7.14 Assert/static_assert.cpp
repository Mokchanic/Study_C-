#include <cassert>
#include <array>
#include <iostream>

int main()
{
	// static_assert�� const�� ��쿡�� ����� ����.
	const int x = 5;
	
	// �ڿ� ������ ���� �� ����.
	static_assert(x == 5, "x should be 5");

	return 0;
}