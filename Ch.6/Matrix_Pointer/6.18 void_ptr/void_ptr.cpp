#include <iostream>

using namespace std;

// void ptr, generic ptr
enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr; // �ּҸ� void ptr�� �ִ°� ������ �ƴ�. // ��� void ptr�� ������� Ÿ���� �� �� ����.

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	Type type = FLOAT;
	
	cout << &f << " " << ptr << endl;
	// ���� ����ȯ
	if(type == FLOAT)
		cout << *static_cast<float*>	(ptr) << endl;
	if (type == INT)
		cout << *static_cast<int*>	(ptr) << endl;

	// dtype ���� ptr
	int* ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	return 0;
}