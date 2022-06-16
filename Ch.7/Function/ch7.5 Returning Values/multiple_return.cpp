//#include <iostream>
//#include <array>
//#include <tuple>
//using namespace std;
//
//// tuple의 return type 정의(사용자 정의 자료형)
//std::tuple<int, double> getTuple()
//{
//	int a = 10;
//	double d = 3.14;
//
//	return std::make_tuple(a, d);
//}
//
//int main()
//{
//	//std::tuple<int, double> my_tp = getTuple();
//	//cout << std::get<0>(my_tp) << endl; // a
//	//cout << std::get<1>(my_tp) << endl; // d
//
//	// ISO cpp 17
//	auto [a, d] = getTuple(); // 각각 변수를 선언해주며 받아줌.
//	cout << a << endl;
//	cout << d << endl;
//
//	return 0;
//}