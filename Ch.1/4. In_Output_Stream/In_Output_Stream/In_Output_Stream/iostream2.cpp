#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int main()
{
	using namespace std; //std�� �Ź����� ������ ���.

	int x(1);

	cout << "Before your input: " << x << endl;

	cin >> x;

	cout << "input: " << x << endl;

	return 0;
}