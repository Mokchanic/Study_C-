//#include <iostream>
//
//using namespace std;
//
//class Fraction
//{
//private:
//	int m_numerator; // ����
//	int m_denominator; // �и�
//
//public:
//	// ������, ������ �ʰ� ���ÿ� ������ ��.
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