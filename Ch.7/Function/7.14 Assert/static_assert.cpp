#include <cassert>
#include <array>
#include <iostream>

int main()
{
	// static_assert는 const인 경우에만 사용이 가능.
	const int x = 5;
	
	// 뒤에 문구를 남길 수 있음.
	static_assert(x == 5, "x should be 5");

	return 0;
}