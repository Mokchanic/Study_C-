//#include <iostream>
//#include <cstdlib> // std::radn(), std::srand()
//#include <ctime>   // std::time()
//
//using namespace std;
//
//int getRandomNumber(int min, int max)
//{
//	static const double fraction = 1.0 / (RAND_MAX + 1.0); // RAND_MAX: random number�� ���� �� ���� ū ����.
//
//	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
//}
//
//int main()
//{
//	srand(static_cast<unsigned int>(std::time(0))); // seed
//
//	for (int count = 1; count <= 100; ++count)
//	{
//		//cout << getRandomNumber(5, 8) << "\t";
//		cout << rand() % 4 + 5 << "\t"; // 4�� ���� �������� 5�� ���ϴ� ���
//
//		if (count % 5 == 0) cout << endl;
//
//	}
//	return 0;
//}