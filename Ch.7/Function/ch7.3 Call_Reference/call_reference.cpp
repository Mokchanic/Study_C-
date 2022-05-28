//#include <iostream>
//
//using namespace std;
//
////void addOne(int& y) // ref이기에 y로 ref가 넘어옴
////{
////	cout << "In function " << y << " " << &y << endl;
////
////	y = y + 1;
////}
//
//////눈치껏 const 변수는 입력, 없는것은 출력으로 볼 수 있음.
////void getSinCos(const double degress, double& sinOut, double& cosOut) // degress는 외부영향이 없지만, sinOut, cosOut은 외부에도 영향이 있구나 볼 수 있음.
////{
////	static const double pi = 3.142592; // static으로 인해 자동주기 -> 정적주기로 바뀌며 한번만 실행이 된다.
////	const double radians = degress * pi / 180.0;
////	sinOut = std::sin(radians);
////	cosOut = std::cos(radians);
////}
//
////ref의 단점
//
////명확한 해석
//typedef int* pint;
//void foo(pint& ptr)
//
////void foo(int *&ptr) // ((int*) &ptr)로 해석하면 편함.
//{
//	cout << "In foo " << ptr << " " << &ptr << endl;
//}
//
//int main()
//{
//	//double sin(0.0);
//	//double cos(0.0);
//
//	//getSinCos(30.0, sin, cos);
//
//	//cout << sin << " " << cos << endl;
//
//	//foo(6);
//	int x = 5;
//	//int* ptr = &x;
//	pint ptr = &x;
//
//	cout << "In Main " << ptr << " " << &ptr << endl;
//
//	foo(ptr);
//
//	return 0;
//}