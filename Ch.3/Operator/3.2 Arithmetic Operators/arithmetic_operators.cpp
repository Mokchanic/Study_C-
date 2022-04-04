#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4; // 결과는  -1이 나올 것.

	//cout << x / y << endl;
	//cout << float(x) / y << endl;
	//cout << x / float(y) << endl;
	//cout << float(x) / float(y) << endl;


	// 아래의 연산자 모두 가능
	int z = x;
	z += y; // z = z + y;
	cout << z << endl;
	z -= y; // z = z - y;
	cout << z << endl;
	z *= y; // z = z * y;
	cout << z << endl;
	z /= y; // z = z / y;
	cout << z << endl;
	z %= y; // z = z % y;
	cout << z << endl;


	return 0;
}