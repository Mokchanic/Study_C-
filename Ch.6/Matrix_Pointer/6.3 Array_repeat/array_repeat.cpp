#include <iostream>

using namespace std;

int main()
{
	int scores[] = { 84, 64, 50, 91, 74 };
	
	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = 0;
	int min_score = 100;
	int total_score = 0;

	for (int std_ix = 0; std_ix < num_students; ++std_ix)
	{
		total_score += scores[std_ix];
		max_score = (max_score < scores[std_ix]) ? scores[std_ix] : max_score;
		min_score = (min_score > scores[std_ix]) ? scores[std_ix] : min_score;
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << endl;
	cout << min_score << endl;

	return 0;
}