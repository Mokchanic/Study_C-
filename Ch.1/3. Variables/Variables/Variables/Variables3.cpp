/*
�����ϱ�
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	x = x + 2;
	cout << x << endl; // 3

	int y = x;
	cout << y << endl; // 3

	cout << x + y << endl; // 6

	cout << x << endl; // 3

	int z(456); //�ֱٿ��� initialization�� ���� ������ ���尡 �ȵ�.
	cout << z << endl;

	return 0;
}