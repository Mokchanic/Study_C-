#include<iostream>

using namespace std;

int main()
{
	int fixedArray[] = { 1, 2, 3, 4, 5 }; // 정적에서는 자동으로 원소의 개수를 잡아줌.

	int* array = new int[]{ 1, 2, 3, 4, 5, 6 }; // 원래 동적에서는 불가능했지만, 지금은 되는듯.

	// resizing 추가로 데이터를 더 받으려고 한다면.

	for (int i = 0; i < 6; i++)
	{
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}