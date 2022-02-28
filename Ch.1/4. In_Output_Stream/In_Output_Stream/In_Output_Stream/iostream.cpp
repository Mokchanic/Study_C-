//#include <iostream> // cout, cin, endl, ...
//#include <cstdio> // printf
//
//int main()
//{
//	using namespace std; //std를 매번쓰기 귀찮을 경우.
//
//	int x = 123;
//	double pi = 3.141592;
//
//	// <<는 output operator라고 부름.
//	cout << "Hello,World\n";// << std::endl; // cout, cin, endl는 std라는 namespace의 이름공간안에 정의가 되어있어서 이를 사용하기 위함. -> std의 cout을 사용하겠다는 의미.
//	cout << "x is " << x << " pi is " << pi << std::endl;
//
//	cout << "abc" << "\t" << "def" << std::endl; // \t는 tab을 의미함. 단순히 빈공간을 넣어도 되지만, \t를 사용함으로 줄을 맞춰줄 수 있음.
//	cout << "ab" << "\t" << "cdef" << std::endl;
//
//	cout << "\a";
//
//	//printf("Hello,World") 다른 출력방법
//
//	int y;
//
//	cin >> y;
//
//	return 0;
//}