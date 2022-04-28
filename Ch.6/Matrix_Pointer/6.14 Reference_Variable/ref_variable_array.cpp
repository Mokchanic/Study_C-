#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	//Other ot;

	////ot.st.v1 = 1.0; // ot안의 st안의 v1 접근 -> 길고 타이핑도 힘들고 느려짐.

	////아래와 같이 ref를 사용하면 편함.
	//int& v1 = ot.st.v1;
	//v1 = 1.0;

	int value = 5;
	int* const ptr = &value; // 주소를 못 바꿈.
	int& ref = value; // 위의 포인터 기능과 지금 해당 기능상 동일한 역할을 함.

	return 0;
}