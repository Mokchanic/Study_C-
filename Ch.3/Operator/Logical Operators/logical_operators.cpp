#include <iostream>

int main()
{
	using namespace std;

	//// logical NOT
	//bool x = true;

	//cout << !x << endl;

	//// logical AND
	//// �� �� true�̸� true
	//bool x = true;
	//bool y = false;

	//cout << (x && y) << endl;

	//// AND example
	//bool hit = true;
	//int health = 10;


	//// hit == true�� hit�� �ᵵ ��������� �������� ���ִ°� ���� ��
	//if (hit == true && health < 20) 
	//{
	//	cout << "You die!" << endl;
	//}
	//else health -= 20;

	//// logical OR
	//// �� �� �ϳ��� true�̸� true
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

	// ���� ����ϸ� ��.
	//if (x != y)
	//{

	//}
	//���Ȯ��
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