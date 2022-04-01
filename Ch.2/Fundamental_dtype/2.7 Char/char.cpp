#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);

	//char c1(65); // c1 = 65;, c1 = {65};
	//char c2('A'); // 한글자 표현: '', 여러글자 표현: ""

	////cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////형변환
	//// c-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;

	//// cpp-style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//// cast는 static과 dynamic이 있으며,
	//// 이는 객체지향을 공부할 때, 설명할 것.
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;


	//cout << sizeof(unsigned char) << endl;
	//cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	//cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;


	//cout << int('\n') << endl;
	//cout << "This is first line \nsecond line\n";
	//cout << "This is first line" << endl;
	//cout << "second line";

	cout << int('\t') << endl;
	cout << "This is first line \a second line \"";

	// 윈도우에서 사용할 수 있지만, 최근 프로그래머들 사이에서는 좋아하지 않으므로, 가급적 사용하지는 않는게 좋음.
	wchar_t c; 
	
	// 문자형이지만, ASCII보다 큰 유니코드 문자를 사용할 수 있음.
	char16_t c1;
	char32_t c2;

	return 0;
}