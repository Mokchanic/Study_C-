#include <iostream>

using namespace std;

int main()
{
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i % 2 == 0) continue;
	//	cout << i << endl;
	//}

	int count = 0;
	//bool escape_flag = false;

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}