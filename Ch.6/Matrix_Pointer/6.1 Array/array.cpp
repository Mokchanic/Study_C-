#include <iostream>

using namespace std;

#define NUM_STUDENTS 10000

struct Rectangle // padding에 의해 들어있는 변수들의 타입들의 합과 같지 않을 수 있다.
{
	int length;
	int width;
};

enum StudentName
{
	mok,		// = 0
	choi,		// = 1
	kim,		// = 2
	Num_student	// = 3
};

int main()
{
	//// base array
	//int one_student_score; // 1 variable
	//int student_scores[5];  // 5 int

	//one_student_score = 100;

	//student_scores[0] = 100; // 1st element
	//student_scores[1] = 80;  // 2nd element
	//student_scores[2] = 60;  // 3rd element
	//student_scores[3] = 40;  // 4th element
	//student_scores[4] = 20;  // 5th element
	////student_scores[5] = 10;  // 6th element

	//cout << student_scores[0] << endl;
	//cout << student_scores[1] << endl;
	//cout << student_scores[2] << endl;
	//cout << student_scores[3] << endl;
	//cout << student_scores[4] << endl;
	////cout << student_scores[5] << endl;

	//// Struct array
	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_array[10];

	//cout << sizeof(rect_array) << endl;

	//rect_array[0].length = 1;
	//rect_array[0].width = 2;

	// init_array
	//int my_array[] = { 1, 2, 3, 4, 5 };

	//cout << my_array[mok] << endl;
	//cout << my_array[choi] << endl;
	//cout << my_array[kim] << endl;
	//cout << my_array[3] << endl;
	//cout << my_array[4] << endl;

	//int student_scores[Num_student];

	//student_scores[mok] = 80;
	//student_scores[choi] = 100;
	//student_scores[kim] = 30;

	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students];

	return 0;
}