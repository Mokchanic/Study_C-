#include <iostream>

using namespace std;

int compare(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int x, y;

	cin >> x >> y;

	cout << "result: " << compare(x, y) << endl;

	

	//if (x > 10)
	//	cout << "A" << endl;
	//else if (x == -1)
	//	return 0;
	//else if (x < 0)
	//	cout << "B" << endl;


	//if (x == y)
	//	cout << "same" << endl;
	//else
	//	cout << "not same" << endl;


	//if (1)
	//	int x = 5;
	//
	//cout << x << endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> x;

	//	if (x > 10)
	//	{
	//		cout << x << "is greater than 10" << endl;
	//	}

	//	else if (5 < x && x <= 10)
	//		cout << x << "is 5 < x <= 10" << endl;

	//	else if (0 < x && x <= 5)
	//		cout << x << "is 0 < x <= 5" << endl;

	//	else
	//		cout << x << "is else" << endl;
	//}

	return 0;
}