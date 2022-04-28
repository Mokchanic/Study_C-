#include <iostream>

using namespace std;

void printArray(const int data[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

int main()
{
	int length = 5;
	int data[] = { 4, 2, 5, 1, 3 };

	printArray(data, length);

	int i, j, temp;

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - (i + 1); j++)
		{
			if (data[j] > data[j + 1])
			{
				//swap
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}

			printArray(data, length);

		}
	}

	return 0;
}