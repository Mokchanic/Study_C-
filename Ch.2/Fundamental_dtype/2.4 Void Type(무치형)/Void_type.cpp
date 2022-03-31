#include <iostream>

void my_function(void)
{

}

int main()
{
	//void my_void; // 보이드는 메모리를 차지하지 않기 때문에 변수선언이 안된다.
	int i = 123;
	float f = 123.456f;

	void *my_void; // *은 주소표현이며 포인터에서 배움.
	// &: 엠페센드
	my_void = (void*)&i; // 정수형 변수의 주소
	my_void = (void*)&f; // 실수형 변수의 주소

	return 0;
}