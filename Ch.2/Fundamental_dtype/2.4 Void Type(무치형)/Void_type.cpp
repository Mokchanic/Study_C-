#include <iostream>

void my_function(void)
{

}

int main()
{
	//void my_void; // ���̵�� �޸𸮸� �������� �ʱ� ������ ���������� �ȵȴ�.
	int i = 123;
	float f = 123.456f;

	void *my_void; // *�� �ּ�ǥ���̸� �����Ϳ��� ���.
	// &: ���伾��
	my_void = (void*)&i; // ������ ������ �ּ�
	my_void = (void*)&f; // �Ǽ��� ������ �ּ�

	return 0;
}