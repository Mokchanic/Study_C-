#include <iostream>

using namespace std;

int addTwoSum(int num_a, int num_b)
{
	return num_a + num_b;
}


int main()
{
	int x;
	int num_a;
	int num_b;

	cout << "How much sum?" << endl;
	cin >> x;
	cout << "Total " << x << endl;

	for (int i = 0; i < x; i++)
	{
		cout << "First number?" << endl;
		cin >> num_a;
		cout << "Second number?" << endl;
		cin >> num_b;

		cout << "addTwoSum = " << addTwoSum(num_a, num_b) << endl;
		cout << "------------------------\n";
	}

	return 0;
}