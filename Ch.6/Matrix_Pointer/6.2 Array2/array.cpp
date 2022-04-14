#include <iostream>

using namespace std;

#define NUM_STUDENTS = 10000

void doSomething(int students_scores[])	// 배열처럼 보이나 문법상 배열이 아닌 포인터이다.
											// 프로그래머가 students_scores 매개변수를 배열을 받을 때 사용할 것이다
											//를 명확하게 보여주기 위해 다음과 같이 보임.
{
	cout << "address 2 " << (size_t)&students_scores << endl;
	cout << "address 3 " << (size_t)&students_scores[0] << endl;

	cout << "doSomething sizeof " << sizeof(students_scores) << endl;

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, }; // 배열의 식별자.

	cout << "address 1 " << (size_t)&students_scores << endl;

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "main sizeof " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}