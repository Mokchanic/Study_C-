#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4; // �����  -1�� ���� ��.

	//cout << x / y << endl;
	//cout << float(x) / y << endl;
	//cout << x / float(y) << endl;
	//cout << float(x) / float(y) << endl;


	// �Ʒ��� ������ ��� ����
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