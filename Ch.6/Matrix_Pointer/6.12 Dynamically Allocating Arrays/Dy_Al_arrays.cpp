//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int length;
//
//	cin >> length;
//
//	int* array = new int[length] {11, 22, 33, 44, 55}; // new�� ������ delete�� �־�� ��.
//	//int* array = new int[length]() ;
//
//
//	array[0] = 1;
//	array[1] = 2;
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << (uintptr_t)&array[i] << endl;
//		cout << array[i] << endl;
//	}
//
//	delete[] array; // �� �������� ������ �ƴ� �迭�� ����Ƿ� ���ȣ�� ����.
//
//	return 0;
//}