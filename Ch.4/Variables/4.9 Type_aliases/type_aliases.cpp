#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;

	typedef double distance_t;

	double     my_distance; // double�̰� distance�̴�.
	distance_t home2work;   // home���� work���� distance�̴�. �׸��� distance�� double�� ǥ���ϰڴ�. ��� �ǹ�.

	//�����ʺ񺯼�
	std::int8_t i(97); // �ִ°͵� �߿� ��Ȳ�� ������ ���� typedef�� ������ �������ٴ� �ǹ�.

	//typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int>>;

	pairlist_t pairlist1; // ������ �ڷ������� ����ȴ�. ���� ����������...
	pairlist_t pairlist2;

	return 0;
}