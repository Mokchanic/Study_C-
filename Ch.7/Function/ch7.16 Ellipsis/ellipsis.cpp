#include <iostream>
#include <cstdarg> // for ellipsis

using namespace std;

double findAverage(int count, ...) // (받아올 arg의 개수, 받아오는 arg)
{
	double sum = 0;

	va_list list; // list 선언 char 문자열
	
	va_start(list, count); // list에 들어오는 arg개수 count를 알려줌.

	for (int arg = 0; arg < count; ++arg)
	{
		sum += va_arg(list, int); // list에 들어온 값들을 int로 변환
	}

	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}