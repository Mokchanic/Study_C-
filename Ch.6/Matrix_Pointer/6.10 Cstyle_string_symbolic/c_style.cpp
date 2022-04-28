#include <iostream>

using namespace std;

const char* getName()
{
	return "jackjack";
}

int main()
{
	// char name[] = "Jack Jack";
	// char* name = "jack jack"; 왼쪽은 포인터 오른쪽은 리터럴이기 때문에 빌드 불가. 실제로 어느 메모리에 담을 것인지 정보가 없음.
	// 포인터는 가르키는 것만 가능하므로, 문자열 리터럴을 const를 사용하여 기호적 상수로 사용할 수 있음
	//const char* name = getName();
	//const char* name2 = getName();

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;

	//int int_arr[5] = { 1, 2, 3, 4, 5 };
	//char char_arr[] = "Hello, World!";
	//const char* name = "jackjack";

	//cout << int_arr << endl;	// 출력: 주소
	//cout << char_arr << endl;	// 출력: 문자열
	//cout << name << endl;		// 출력: 문자열

	char c = 'Q';
	cout << *&c << endl; // c의 주소를 cout에 넣음.

	return 0;
}