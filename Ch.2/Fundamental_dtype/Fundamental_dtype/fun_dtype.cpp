#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592; //�ڵ����� ������
	auto aValue2 = 3.141592f;

	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;

	int i = (int)3.1415;
	int a((int)3.14);
	int b{ 4 };

	//�������� ������ ���ÿ� �����ϴ� ���
	int k, l, m;
	int x, y, z = 123; //�����ϳ� �������� ����

	return 0;
}