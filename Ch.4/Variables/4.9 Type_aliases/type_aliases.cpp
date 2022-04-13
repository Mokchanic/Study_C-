#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;

	typedef double distance_t;

	double     my_distance; // double이고 distance이다.
	distance_t home2work;   // home에서 work까지 distance이다. 그리고 distance를 double로 표현하겠다. 라는 의미.

	//고정너비변수
	std::int8_t i(97); // 있는것들 중에 상황에 적합한 것을 typedef로 가명을 만들어줬다는 의미.

	//typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int>>;

	pairlist_t pairlist1; // 일종의 자료형으로 보면된다. 조금 복잡하지만...
	pairlist_t pairlist2;

	return 0;
}