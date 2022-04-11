#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	//const char my_strs[] = "Hello, World!";
	//const string my_hello = "Hello, World!";
	//const string my_hello("Hello, World!");
	//const string my_hello{ "Hello, World!" };

	//string my_ID = "123"; // 가능
	////string my_ID2 = 123;  // 불가능 -> 암시적으로 형변환을 해줄 수 있는 방법이 없기 때문.

	//cout << "Your age ? : ";
	//int age;
	//cin >> age;

	//// std::cin.ignore(32767, '\n'); // \n이 올 때까지 최대 32767개의 글자를 날려버리라는 의미.
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//cout << "Your name ? : ";
	//string name;
	//std::getline(std::cin, name);
	//// cin >> name;



	//cout << name << " " << age << endl;

	string a("Hello, ");
	string b("World ");
	string hw = a + b;

	hw += "I'm good";

	cout << hw.length() << endl;
	cout << hw << endl;

	return 0;
}