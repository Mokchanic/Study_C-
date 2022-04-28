//#include <iostream>
//#include <typeinfo>
//
//using namespace std;
//
//struct Something
//{
//	int a, b, c, d; // 4 x 4 = 16 bytes
//};
//
//int main()
//{
//	int x = 5;
//	double d = 1.0;
//
//	//cout << x << endl;
//	//cout << &x << endl; // &: address of operator
//	//cout << (int)&x << endl; // cstyle casting
//	//
//	//// de-reference operator (*)
//	//cout << "de-reference operator: " << *&x << endl;
//
//	int* ptr_x = &x;
//	double * ptr_d = &d;
//
//	//cout << ptr_x << endl;	// address
//	//cout << *ptr_x << endl; // de-reference
//
//	//cout << ptr_d << endl;	// address
//	//cout << *ptr_d << endl; // de-reference
//
//	//cout << sizeof(x) << endl;
//	//cout << sizeof(d) << endl;
//	//cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
//	//cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
//
//	//Something ss;
//	//Something *ptr_s;
//
//	//cout << sizeof(Something) << endl;
//	//cout << sizeof(ptr_s) << endl;
//
//	cout << *ptr_x << endl; // de-reference
//
//
//	return 0;
//}