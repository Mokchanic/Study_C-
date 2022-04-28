#include<iostream>

using namespace std;

struct MyStruct
{
	int odd_array[5] = { 9, 7, 5, 3, 1 };

};

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).odd_array) << endl;
}

int main()
{
	MyStruct ms;
	cout << ms.odd_array[0] << endl;
	cout << sizeof(ms.odd_array) << endl;

	doSomething(&ms);

	return 0;
}