#include <iostream>

using namespace std;

const char* getName()
{
	return "jackjack";
}

int main()
{
	// char name[] = "Jack Jack";
	// char* name = "jack jack"; ������ ������ �������� ���ͷ��̱� ������ ���� �Ұ�. ������ ��� �޸𸮿� ���� ������ ������ ����.
	// �����ʹ� ����Ű�� �͸� �����ϹǷ�, ���ڿ� ���ͷ��� const�� ����Ͽ� ��ȣ�� ����� ����� �� ����
	//const char* name = getName();
	//const char* name2 = getName();

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;

	//int int_arr[5] = { 1, 2, 3, 4, 5 };
	//char char_arr[] = "Hello, World!";
	//const char* name = "jackjack";

	//cout << int_arr << endl;	// ���: �ּ�
	//cout << char_arr << endl;	// ���: ���ڿ�
	//cout << name << endl;		// ���: ���ڿ�

	char c = 'Q';
	cout << *&c << endl; // c�� �ּҸ� cout�� ����.

	return 0;
}