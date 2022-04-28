//#include <iostream>
//
//using namespace std;
//
//void printArray(const int array[], const int length)
//{
//	for (int index = 0; index < length; ++index)
//		cout << array[index] << " ";
//	cout << endl;
//}
//
//
//int main()
//{
//	/*			value	index // value는 처음의 값으로 결정됨.
//	3 5 2 1 4     3       0
//	1 5 2 3 4     5       1
//	1 2 5 3 4     5       2
//	1 2 3 5 4     5       3
//	1 2 3 4 5     
//	*/
//
//	const int length = 5;
//	int array[length] = { 3, 5, 2, 1, 4 };
//
//	printArray(array, length);
//
//	for (int start_idx = 0; start_idx < length - 1; start_idx++)
//	{
//		int max_idx = start_idx;
//
//		for (int change_idx = start_idx + 1; change_idx < length; change_idx++)
//		{
//			max_idx = (array[max_idx] > array[change_idx]) ? max_idx : change_idx;
//		}
//
//		//swap
//		{
//			std::swap(array[max_idx], array[start_idx]);
//		}
//		printArray(array, length);
//
//	}
//
//	return 0;
//}