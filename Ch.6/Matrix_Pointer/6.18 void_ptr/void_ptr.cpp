#include <iostream>

using namespace std;

// void ptr, generic ptr
enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr; // 주소를 void ptr에 넣는건 문제가 아님. // 대신 void ptr에 넣을경우 타입을 알 수 없음.

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	Type type = FLOAT;
	
	cout << &f << " " << ptr << endl;
	// 강제 형변환
	if(type == FLOAT)
		cout << *static_cast<float*>	(ptr) << endl;
	if (type == INT)
		cout << *static_cast<int*>	(ptr) << endl;

	// dtype 선언 ptr
	int* ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	return 0;
}