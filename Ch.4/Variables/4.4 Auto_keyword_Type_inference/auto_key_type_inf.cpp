#include <iostream>

//auto add(int x, int y) -> int;
//auto add(int x, int y) -> double;
//
//int		add(int x, int y) -> int;
//double	add(int x, int y) -> int;

//auto add(int x, int y) -> int
//{
//	return x + y;
//}
//
//
//int main()
//{
//	using namespace std;
//
//	// 형 추론
//	int a = 123;  // 123은 정수이다. a의 앞에 int가 오는것은 너무 당연함.
//	//auto a = 123; // 이와 같이 자동으로 할 수 있다.
//
//	auto d = 123.0;
//	auto c = 1 + 2.0;
//	auto result = add(1, 2);
//
//	return 0;
//}