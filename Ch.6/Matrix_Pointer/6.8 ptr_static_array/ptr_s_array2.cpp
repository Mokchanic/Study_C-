//#include<iostream>
//
//using namespace std;
//
////void printArray(int array[]) // parameter가 들어오는 순간 대괄호가 있어서 array로 보이지만 내부적으로는 pointer이다.
//void printArray(int *array) // 위와 동일한 역할을 한다.
//{
//	cout << sizeof(array) << endl; // value: 4
//	cout << *array << endl;
//
//	// 중요한 성질
//	*array = 100;
//}
//
//int main()
//{
//	int odd_array[] = { 9, 7, 5, 3, 1 };
//
//	//cout << sizeof(odd_array) << endl; // 담긴 데이터의 전체 사이즈가 출력이 된다. value: 20
//
//	int* ptr = odd_array;
//
//	cout << *ptr << " " << *(ptr + 1) << endl;
//
//	//cout << sizeof(ptr) << endl; // 포인터 변수 자체 사이즈 출력. value: 4 (pointer)
//
//	//printArray(odd_array); // 20이 출력이 될 것 같지만, 아니다.
//
//	//cout << odd_array[0] << " " << *odd_array << endl;
//
//	return 0;
//}