//#include<iostream>
//
//using namespace std;
//
//int main(void)
//{
//	//int value = 7;
//	//int* ptr = &value;
//
//	//cout << uintptr_t(ptr - 2) << endl;
//	//cout << uintptr_t(ptr - 1) << endl;
//	//cout << uintptr_t(ptr) << endl; // unsigned integer pointer_type으로 변환하겠다.
//	//cout << uintptr_t(ptr + 1) << endl;
//	//cout << uintptr_t(ptr + 2) << endl;
//
//	int array[] = { 9, 7, 5, 3, 1 };
//	int* ptr = array;
//
//	for (int i = 0; i < 4; i++)
//	{
//		// cout << array[i] << " " << (uintptr_t)&array[i] << endl;
//		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
//	}
//		
//
//	return 0;
//}