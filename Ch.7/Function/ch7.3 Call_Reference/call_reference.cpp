//#include <iostream>
//
//using namespace std;
//
////void addOne(int& y) // ref�̱⿡ y�� ref�� �Ѿ��
////{
////	cout << "In function " << y << " " << &y << endl;
////
////	y = y + 1;
////}
//
//////��ġ�� const ������ �Է�, ���°��� ������� �� �� ����.
////void getSinCos(const double degress, double& sinOut, double& cosOut) // degress�� �ܺο����� ������, sinOut, cosOut�� �ܺο��� ������ �ֱ��� �� �� ����.
////{
////	static const double pi = 3.142592; // static���� ���� �ڵ��ֱ� -> �����ֱ�� �ٲ�� �ѹ��� ������ �ȴ�.
////	const double radians = degress * pi / 180.0;
////	sinOut = std::sin(radians);
////	cosOut = std::cos(radians);
////}
//
////ref�� ����
//
////��Ȯ�� �ؼ�
//typedef int* pint;
//void foo(pint& ptr)
//
////void foo(int *&ptr) // ((int*) &ptr)�� �ؼ��ϸ� ����.
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