//#include <iostream>
//
//using namespace std;
//
//int* allocateMemory(int size)
//{
//	return new int[size]; // new가 있으므로 delete도 있어야 한다. 어디서?
//}
//
//int main()
//{
//	int* array = allocateMemory(1024);
//
//	delete[] array; // 구조상으로는 여기이지만, 이렇게 쓰면 정신이 없음.
//
//	return 0;
//}