#include <iostream>

using namespace std;

//void print(int x = 10, int y = 20, int z = 30); // in header
//
//void print(int x, int y, int z) // default parameter, default argument
//{
//	cout << x << " " << y << " " << z << endl;
//}

void print(int x) {}
void print(int x, int y) {}

int main()
{
	print(10);

	return 0;
}