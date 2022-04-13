#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{
	std::random_device rd;
	// 32bit ���� ����  	//std::mt19937_64; // 64bit ���� ����
	std::mt19937 mersenne(rd()); // create a mesenne twister, : ���ڸ� ������.
	std::uniform_int_distribution<> dice(1, 6); // 1 ~ 6������ random ���� ������, normal_distribution, poisson_distribution�� �پ��ϰ� ����.

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}