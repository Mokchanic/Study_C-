#include <iostream>
#include <string>

using namespace std;

typedef int my_int;

//void print(const char *value) {}
//void print(int value) {}

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	//print(0);
	//print("a");

	// 모호한 경우
	print((unsigned int)'a');
	print(0u);
	print(3.14159f);

	return 0;
}