#include <iostream>

using namespace std;

// C style coding
void foo(const int* ptr, int* arr, int length)
{
	// work
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;

	arr[0] = 1.0; // ���ȭ�� �ǹ̴� dereferencing

	int x = 1;
	
	// const *ptr�� �ּҸ� �ٲٴ� ���� ����
	ptr = &x;
}

void foo(double degrees, double *sin_out, double *cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

int main()
{
	int value = 5;

	//cout << value << " " << &value << endl;

	// declaration ptr_address method
	//int* ptr = &value;

	//cout << &ptr << endl;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;

	return 0;
}