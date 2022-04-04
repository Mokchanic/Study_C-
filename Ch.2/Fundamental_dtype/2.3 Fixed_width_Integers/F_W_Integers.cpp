#include <iostream>
#include <cstdint> // �� include�� ��� iostream�� ������ �Ǿ������Ƿ�, iostream�� ����ϸ� ���� �� �ʿ�� ����.

int main() 
{
	using namespace std;

	std::int16_t i(5); // �� �÷������� 2bytes�� �ٲٰڴٴ� �ǹ�
	std::int8_t myint = 65; // �� �÷������� 1bytes�� �ٲٰڴٴ� �ǹ�

	cout << myint << endl;

	std::int_fast8_t fi(5); // integer�� 8bits ������ ���� ���������� Ÿ��
	std::int_least64_t fl(5);// ��� 64bits 8bytes�� ������ Ÿ��

	return 0;
}