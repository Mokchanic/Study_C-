#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592; //자동으로 결정됨
	auto aValue2 = 3.141592f;

	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	int i = (int)3.1415;
	int a((int)3.14);
	int b{ 4 };

	//여러개의 변수를 동시에 선언하는 방법
	int k, l, m;
	int x, y, z = 123; //가능하나 권장하지 않음

	return 0;
}