#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	RED,
	BLUE,
	WHITE,
	GREEN
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "RED" << endl;
		break;
	case 2:
		cout << "BLUE" << endl;
		break;
	case 3:
		cout << "WHITE" << endl;
		break;
	case 4:
		cout << "GREEN" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	// printColorName(Colors::WHITE);

	//int x;
	//cin >> x;
	//{
	//	switch (x)
	//	{
	//	case 0:
	//		cout << "Zero";
	//		break;

	//	case 1:
	//		cout << "One";
	//		break;

	//	case 2:
	//		cout << "Two";
	//		break;
	//	}

	//	cout << endl;
	//}
	int x;
	cin >> x;

	switch (x)
	{
		int a;
		int y;

	case 0:
		cout << "case 0" << endl;
		break;

	case 1:
		y = 5;
		cout << y << endl;
		break;

	default:
		cout << "Undefined input" << x << endl;
	}
	
	return 0;
}