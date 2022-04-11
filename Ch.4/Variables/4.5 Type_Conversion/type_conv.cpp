#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	//float a = 1.0f;
	//double d = a; // numeric promotion

	//cout << typeid(a).name() << endl;


	// numeric conversion
	int i = 4.0; // double이 암시적 형변환 되어 int 로 바뀜.
	int j = int(4.0); // cpp style casting
	int k = (int)4.0; // c style casting
	int l = static_cast<int>(4.0); // recent

	return 0;
}