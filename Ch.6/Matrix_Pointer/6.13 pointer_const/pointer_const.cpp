#include<iostream>

using namespace std;

int main()
{
	// 사례 1
	//int value = 5;		
	//const int* ptr = &value;	// value의 주소를 ptr에 넣어줌.
	////*ptr = 6;			// dereference를 사용하여 변수의 값을 바꿈.
	//value = 6;

	//cout << *ptr << endl;

	// 사례 2
	//int value1 = 5;
	//const int* ptr = &value1;

	//int value2 = 6;
	//ptr = &value2;

	// 사례 3
	//int value = 5;
	//int* const ptr = &value;

	//// 역참조가 가능함을 볼 수 있다.
	//*ptr = 10;
	//cout << *ptr << endl;

	////value2
	//int value2 = 8;
	//ptr = &value2;

	// 정리
	int value = 5;
	const int* ptr1 = &value;
	int* const ptr2 = &value;
	const int* const ptr3 = &value;

	return 0;
}