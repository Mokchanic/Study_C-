#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	//Other ot;

	////ot.st.v1 = 1.0; // ot���� st���� v1 ���� -> ��� Ÿ���ε� ����� ������.

	////�Ʒ��� ���� ref�� ����ϸ� ����.
	//int& v1 = ot.st.v1;
	//v1 = 1.0;

	int value = 5;
	int* const ptr = &value; // �ּҸ� �� �ٲ�.
	int& ref = value; // ���� ������ ��ɰ� ���� �ش� ��ɻ� ������ ������ ��.

	return 0;
}