#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;

}

int main()
{
	//int array[5] = { 1, 2, 3, 4, 5 };

	array<int, 5> my_arr = { 1, 22, 31, 4, 5 };
	//my_arr = { 0, 1, 2, 3, 4 };
	//my_arr = { 0, 1, 2 };

	//cout << my_arr[0] << endl;		// []내부에 값이 넘어가도 엑세스를 진행함.
	//cout << my_arr.at(0) << endl;	// 미리한번 check를 해보고 예외처리를 발동시킴.

	//cout << my_arr.size() << endl;
	//printLength(my_arr);

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.begin(), my_arr.end());

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.rbegin(), my_arr.rend());

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}