///*
//Global Variable, Static Variable, Internal Linkage External Linkage
//*/
//
//#include <iostream>
//
//using namespace std;
//
//// forward declaration
//// 어딘가에 doSomething이 있으니, Linking을 할 때 붙여주라는 의미.
//extern void doSomething(); // extern은 생략할 수 있음.
//extern int a = 2;
//
//
//int main()
//{
//
//	doSomething();
//
//	cout << a << endl;
//
//	return 0;
//}