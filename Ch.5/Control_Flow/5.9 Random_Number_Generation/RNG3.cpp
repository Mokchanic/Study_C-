#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{
	std::random_device rd;
	// 32bit 난수 생성  	//std::mt19937_64; // 64bit 난수 생성
	std::mt19937 mersenne(rd()); // create a mesenne twister, : 숫자를 꼬아줌.
	std::uniform_int_distribution<> dice(1, 6); // 1 ~ 6사이의 random 값이 나오며, normal_distribution, poisson_distribution등 다양하게 있음.

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;
}