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

	//string my_ID = "123"; // ����
	////string my_ID2 = 123;  // �Ұ��� -> �Ͻ������� ����ȯ�� ���� �� �ִ� ����� ���� ����.

	//cout << "Your age ? : ";
	//int age;
	//cin >> age;

	//// std::cin.ignore(32767, '\n'); // \n�� �� ������ �ִ� 32767���� ���ڸ� ����������� �ǹ�.
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