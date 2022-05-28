#include <iostream>
#include <vector>

using namespace std;

void printElement(const vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	cout << arr[i] << endl;
}

int main()
{
	vector<int> arr{ 1,2,3,4 };
	printElement(arr);

	return 0;
}