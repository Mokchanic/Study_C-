#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b); // a�� b�� ������ true �ƴϸ� false

	return result;
}

int main()
{
	using namespace std;

	//bool b1 = true; // copy initialization
	//bool b2(false); // direct ...
	//bool b3{ true }; // uniform ini...

	//b3 = false; //assignment

	//cout << std::noboolalpha;
	//cout << (true || true) << endl;
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;
	//
	//if (true) // �������� �����ϰ� �������� �߰�ȣ�� ����ϸ� �ȴ�.
	//{
	//	cout << "This is true" << endl;
	//	cout << "The second line" << endl;
	//}
	//else
	//	cout << "This is false" << endl;

	/*cout << std::boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;*/

	//if (0)
	//{
	//	cout << "true" << endl;
	//}
	//else
	//	cout << "false" << endl;

	bool b;

	cin >> b;
	cout << std::boolalpha;
	cout << "Your input: " << b << endl;

	return 0;
}