/*
복습하기
*/

#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	x = x + 2;
	cout << x << endl; // 3

	int y = x;
	cout << y << endl; // 3

	cout << x + y << endl; // 6

	cout << x << endl; // 3

	int z(456); //최근에는 initialization을 하지 않으면 빌드가 안됨.
	cout << z << endl;

	return 0;
}