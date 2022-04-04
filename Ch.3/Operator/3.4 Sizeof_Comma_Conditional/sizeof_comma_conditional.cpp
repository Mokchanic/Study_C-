#include <iostream>

int getPrice(bool onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	/* sizeof_operator */
	//float a;

	//sizeof(float); //4
	//sizeof(a);	   //4

	/* comma_operator */
	//int x = 3;
	//int y = 10;
	//int z = (++x, ++y);
	//++x;
	//++y;
	//int z = y;

	//cout << x << " " << y << " " << z << endl;

	//int a = 1, b = 10; // 이 부분의 ,는 Comma operator가 아닌 구분하는 점.
	//int z;

	//z = (a, b);

	//cout << z << endl; // 결과는 10으로 예상

	/* conditional operaotr (arithmetric if) */ 

	bool onSale = false;

	//const int price = (onSale == true)? 10 : 100;

	const int price = getPrice(onSale);

	//if (onSale)
	//	price = 10;
	//else
	//	price = 100;

	cout << price << endl;

	int x = 5;
	// 해당 삼항연산자는 왜 오류가 발생하는가?
	// 그 이유는 우선순위 때문이다.
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}