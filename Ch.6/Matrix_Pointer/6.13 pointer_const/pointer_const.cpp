#include<iostream>

using namespace std;

int main()
{
	// ��� 1
	//int value = 5;		
	//const int* ptr = &value;	// value�� �ּҸ� ptr�� �־���.
	////*ptr = 6;			// dereference�� ����Ͽ� ������ ���� �ٲ�.
	//value = 6;

	//cout << *ptr << endl;

	// ��� 2
	//int value1 = 5;
	//const int* ptr = &value1;

	//int value2 = 6;
	//ptr = &value2;

	// ��� 3
	//int value = 5;
	//int* const ptr = &value;

	//// �������� �������� �� �� �ִ�.
	//*ptr = 10;
	//cout << *ptr << endl;

	////value2
	//int value2 = 8;
	//ptr = &value2;

	// ����
	int value = 5;
	const int* ptr1 = &value;
	int* const ptr2 = &value;
	const int* const ptr3 = &value;

	return 0;
}