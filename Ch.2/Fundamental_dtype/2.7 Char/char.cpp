#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);

	//char c1(65); // c1 = 65;, c1 = {65};
	//char c2('A'); // �ѱ��� ǥ��: '', �������� ǥ��: ""

	////cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////����ȯ
	//// c-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;

	//// cpp-style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//// cast�� static�� dynamic�� ������,
	//// �̴� ��ü������ ������ ��, ������ ��.
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

	// �����쿡�� ����� �� ������, �ֱ� ���α׷��ӵ� ���̿����� �������� �����Ƿ�, ������ ��������� �ʴ°� ����.
	wchar_t c; 
	
	// ������������, ASCII���� ū �����ڵ� ���ڸ� ����� �� ����.
	char16_t c1;
	char32_t c2;

	return 0;
}