#include <iostream>

using namespace std;

int main()
{
	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}


	//unsigned int count = 1;

	//while (count < 100)
	//{
	//	if (count % 5 == 0) cout << "Hello " << count << endl;

	//	count++;
	//}

	//int count = 0;

	//while (1)
	//{
	//	cout << count << endl;

	//	count++;

	//	if (count == 10) break;
	//}

	return 0;
}