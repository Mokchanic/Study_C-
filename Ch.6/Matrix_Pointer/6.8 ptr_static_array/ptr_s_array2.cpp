//#include<iostream>
//
//using namespace std;
//
////void printArray(int array[]) // parameter�� ������ ���� ���ȣ�� �־ array�� �������� ���������δ� pointer�̴�.
//void printArray(int *array) // ���� ������ ������ �Ѵ�.
//{
//	cout << sizeof(array) << endl; // value: 4
//	cout << *array << endl;
//
//	// �߿��� ����
//	*array = 100;
//}
//
//int main()
//{
//	int odd_array[] = { 9, 7, 5, 3, 1 };
//
//	//cout << sizeof(odd_array) << endl; // ��� �������� ��ü ����� ����� �ȴ�. value: 20
//
//	int* ptr = odd_array;
//
//	cout << *ptr << " " << *(ptr + 1) << endl;
//
//	//cout << sizeof(ptr) << endl; // ������ ���� ��ü ������ ���. value: 4 (pointer)
//
//	//printArray(odd_array); // 20�� ����� �� �� ������, �ƴϴ�.
//
//	//cout << odd_array[0] << " " << *odd_array << endl;
//
//	return 0;
//}