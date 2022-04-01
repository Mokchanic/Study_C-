#include <iostream>
#include "my_const.h"

using namespace std;

//void printNumber(const int& my_num) // 입력값
//{
//	cout << my_num << endl;
//}

int main() 
{
	//const int my_const(123); // Compile time 상수

	//int number;
	//cin >> number;

	//const int special_number(number); // Run time 상수

	//const int price_per_item = 30;

	//int num_item = 123;

	//int price = num_item * price_per_item;

	double radius;
	cin >> radius;

	double cirvumference = 2.0 * radius * constants::pi;

	return 0;
}