#include<iostream>

//using namespace std;
//
//int main()
//{
//	//int var; // 기본적인 메모리 할당
//	//var = 7;
//
//	// 위와 같은 역할을 함.
//	//int *ptr = new int(7);
//	//int* ptr = new (std::nothrow) int{ 7 };
//
//	//if (ptr)
//	//{
//	//	cout << ptr << endl;
//	//	cout << *ptr << endl;
//	//}
//	//else
//	//{
//	//	cout << "Could not allocate memory.." << endl;
//	//}
//
//	//delete ptr; // memory를 os에게 돌려줌. // 알아서 먼저 반납을 하겠다는 의미.
//
//	//// 방지하는 방법 세가지
//	////ptr = 0;
//	////ptr = Null;
//	//ptr = nullptr;
//
//	//cout << "After delete" << endl;
//
//	////if(ptr) 도 가능.
//	//if (ptr != nullptr)
//	//{
//	//	cout << ptr << endl;
//	//	cout << *ptr << endl;
//	//}
//
//	//// 흔히 할 수 있는 실수
//	//int* ptr = new (std::nothrow) int{ 7 };
//	//int* ptr2 = ptr;
//
//	//delete ptr;
//	//ptr = nullptr;
//
//	//return 0;
//}