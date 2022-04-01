#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b); // a와 b가 같으면 true 아니면 false

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
	//if (true) // 여러줄을 실행하고 싶을때는 중괄호를 사용하면 된다.
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