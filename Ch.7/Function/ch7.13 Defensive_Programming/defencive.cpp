// 3. violated assumption example
#include <iostream>

using namespace std;

int main()
{
	// violated assumption
	string hello = "Hello, my name is Jack Jack";

	cout << "Input from 0 to" << hello.size() - 1 << endl;

	while (true)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
		{
			cout << "Please try again" << endl;
		}
	}

	return 0;
}