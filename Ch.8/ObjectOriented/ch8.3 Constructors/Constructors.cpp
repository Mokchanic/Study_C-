//#include <iostream>
//
//using namespace std;
//
//class Fraction
//{
//private:
//	int m_numerator; // 분자
//	int m_denominator; // 분모
//
//public:
//	// 생성자, 선언이 됨과 동시에 실행이 됨.
//	Fraction(const int& num_in = 1, const int& den_in = 1)
//	{
//		m_numerator = num_in;
//		m_denominator = den_in;
//	}
//
//	void print()
//	{
//		cout << m_numerator << "/" << m_denominator << endl;
//	}
//};
//
//int main()
//{
//	//Fraction frac;
//	//frac.print();
//	Fraction one_thirds = Fraction{ 1, 3 }; // copy initialize
//	one_thirds.print();
//
//	return 0;
//}