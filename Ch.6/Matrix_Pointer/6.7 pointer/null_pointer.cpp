#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
	cout << "address of pointer varaible in doSomething() " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	// double *ptr = NULL; // c-style
	// double* ptr{ 0 }; // uniform initialization
	// double* ptr{ nullptr }; // uniform initialization
	
	double *ptr = nullptr; // modern cpp

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123;
	doSomething(&d);
	
	ptr = &d;
	doSomething(ptr);

	// cstddef
	// null pointer만 넣을 수 있음.
	// std::nullptr_t nptr; // 간혹 파라미터중에 nullptr만 넣어야 되는 때가 있음. (많이 사용되지는 않은듯)

	cout << "address of pointer varaible in main() " << &ptr << endl;

	return 0;
}