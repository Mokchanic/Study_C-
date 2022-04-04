#include <iostream>
#include <cstdint> // 이 include의 경우 iostream에 내장이 되어있으므로, iostream을 사용하면 따로 쓸 필요는 없다.

int main() 
{
	using namespace std;

	std::int16_t i(5); // 그 플랫폼에서 2bytes로 바꾸겠다는 의미
	std::int8_t myint = 65; // 그 플랫폼에서 1bytes로 바꾸겠다는 의미

	cout << myint << endl;

	std::int_fast8_t fi(5); // integer의 8bits 형식중 가장 빠른데이터 타입
	std::int_least64_t fl(5);// 적어도 64bits 8bytes의 데이터 타입

	return 0;
}