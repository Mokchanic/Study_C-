#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// �� ���� cout operator�� �ƴ� �ٸ� �ǹ��� �������̴�.
	// << left shift
	// >> right shift
	// ~  NOT
	// &  AND
	// |  OR
	// ^  XOR ��Ʈ �����ڿ��� XOR Operator�� �����Ѵ�.

	// Left shift
	//unsigned int a = 3;

	//cout << std::bitset<8>(a) << " " << a << endl;

	//cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	//cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	//cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	//cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

	// Right shift
	//unsigned int a = 1024;

	//cout << std::bitset<16>(a) << " " << a << endl;

	//cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	//cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	//cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	//cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	// Bitwise Not
	//unsigned int a = 1024;

	//cout << std::bitset<16>(a) << " " << a << endl;

	//cout << std::bitset<16>(~a) << " " << (~a) << endl;

	// Binary, and, or, xor
	//unsigned int a = 0b1100; // 12
	//unsigned int b = 0b0110; //  6

	//cout << std::bitset<4>(a & b) << endl; // bitwise AND
	//cout << std::bitset<4>(a | b) << endl; // bitwise OR
	//cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

	////���� �ٿ��� ����� ������
	//a &= b;

	unsigned int a = 0b0110;
	cout << std::bitset<8>(a >> 2) << " " << (a >> 2) << endl;

	// 5  = 0b0101
	// 12 = 0b1100
	cout << (5 | 12) << endl;
	cout << (5 & 12) << endl;
	cout << (5 ^ 12) << endl;

	return 0;
}