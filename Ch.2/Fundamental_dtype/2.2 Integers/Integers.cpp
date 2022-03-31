#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	//short	s = 1; // 2 bytes = 2 * 8 bits = 16 bits. 즉 short로 표현할 수 있는 수는 2^16
	//int		i = 1; // 4 bytes = 4 * 8 bits = 32 bits.
	//long	l = 1; // 4 bytes = 4 * 8 bits = 32 bits.
	//long long ll = 1; // 8 bytes = 8 * 8 bits =  bits.

	//cout << sizeof(short) << endl;
	//cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	//cout << std::numeric_limits<short>::max() << endl;
	//cout << std::numeric_limits<short>::min() << endl;
	//cout << std::numeric_limits<short>::lowest() << endl;

	/*cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;*/

	//s = 32767;
	//s = s + 1; // 32768
	//cout << "32768?: " << s << endl;

	//s = std::numeric_limits<short>::min();
	//cout << "min?: " << s << endl;
	//s = s - 1;
	//cout << "32768?: " << s << endl;

	unsigned int i = -1;

	cout << i << endl;

	return 0;
}