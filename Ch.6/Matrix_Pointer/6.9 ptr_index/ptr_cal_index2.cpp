#include<iostream>

using namespace std;

int main(void)
{
	char name[] = "mok mok";
	const int n_name = sizeof(name) / sizeof(char);
	char* ptr = name;

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr+i);
	}

	return 0;
}