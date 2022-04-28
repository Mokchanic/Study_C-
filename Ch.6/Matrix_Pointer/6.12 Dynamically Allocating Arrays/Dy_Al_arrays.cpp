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
//	int* array = new int[length] {11, 22, 33, 44, 55}; // new가 있으면 delete도 있어야 함.
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
//	delete[] array; // 한 사이즈의 변수가 아닌 배열을 지우므로 대괄호가 있음.
//
//	return 0;
//}