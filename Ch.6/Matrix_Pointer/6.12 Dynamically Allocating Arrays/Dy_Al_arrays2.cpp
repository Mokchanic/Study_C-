#include<iostream>

using namespace std;

int main()
{
	int fixedArray[] = { 1, 2, 3, 4, 5 }; // ���������� �ڵ����� ������ ������ �����.

	int* array = new int[]{ 1, 2, 3, 4, 5, 6 }; // ���� ���������� �Ұ���������, ������ �Ǵµ�.

	// resizing �߰��� �����͸� �� �������� �Ѵٸ�.

	for (int i = 0; i < 6; i++)
	{
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}