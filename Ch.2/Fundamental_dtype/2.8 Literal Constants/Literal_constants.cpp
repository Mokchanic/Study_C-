#include <iostream>

int main() 
{
	using namespace std;

	//unsigned int n = 5u;
	//long n2 = 5L;
	//double d = 6.0e-10;

	//Decimal: 0 1 2 3 4 5 6 7 8 9 10 ...
	//Octal  : 0 1 2 3 4 5 6 7 10 11 12 13 ...
	//Hexa   : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 ...

	//int x = 12; // Decimal
	//int y = 012; //Octal
	//int z = 0xF; //Hexa
	//int a = 0b1010; //Binary
	//int b = 0b1010'1111'0110;

	//cout << x << endl;
	//cout << y << endl;
	//cout << z << endl;
	//cout << a << endl;
	//cout << b << endl;

	const int price_per_item = 10;

	int num_items = 123;
	int price = num_items * price_per_item; // 10 is ...

	return 0;
}