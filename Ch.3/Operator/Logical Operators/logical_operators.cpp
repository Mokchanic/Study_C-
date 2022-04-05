#include <iostream>

int main()
{
	using namespace std;

	//// logical NOT
	//bool x = true;

	//cout << !x << endl;

	//// logical AND
	//// 둘 다 true이면 true
	//bool x = true;
	//bool y = false;

	//cout << (x && y) << endl;

	//// AND example
	//bool hit = true;
	//int health = 10;


	//// hit == true를 hit만 써도 상관없지만 가독성상 써주는게 좋을 듯
	//if (hit == true && health < 20) 
	//{
	//	cout << "You die!" << endl;
	//}
	//else health -= 20;

	//// logical OR
	//// 둘 중 하나만 true이면 true
	//bool x = true;
	//bool y = false;

	//cout << (x || y) << endl;

	//// OR example
	//int v = 1;
	//if (v == 0 || v == 1)
	//	cout << "v is 0 or 1" << endl;

	// short circuit evaluation
	//int x = 2;
	//int y = 2;

	//if (x == 1 && y++ == 2)
	//{
	//	// do something
	//}

	//cout << y << endl;

	bool x = true;
	bool y = true;

	//// De Morgan's Law
	//!(x && y);
	//!x && !y;

	// XOR
	// false false false
	// false true  true
	// true  false true
	// true  true  false

	// 으로 사용하면 됨.
	//if (x != y)
	//{

	//}
	//출력확인
	//cout << (x != y) << endl;

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl;
	cout << r2 << endl;

	return 0;
}