#include <iostream>

using namespace std;

#define NUM_STUDENTS = 10000

void doSomething(int students_scores[])	// �迭ó�� ���̳� ������ �迭�� �ƴ� �������̴�.
											// ���α׷��Ӱ� students_scores �Ű������� �迭�� ���� �� ����� ���̴�
											//�� ��Ȯ�ϰ� �����ֱ� ���� ������ ���� ����.
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

	int students_scores[num_students] = { 1, 2, 3, 4, 5, }; // �迭�� �ĺ���.

	cout << "address 1 " << (size_t)&students_scores << endl;

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "main sizeof " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}