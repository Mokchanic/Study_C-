#include <iostream>

int add(int a, int b) 
{
	return a + b;
}

int main()
{
	using namespace std;

	int x = 1;
	/*int v = add(x, ++x);

	cout << v << endl;*/
	
	x = x++;
	cout << x << endl;

	return 0;
}