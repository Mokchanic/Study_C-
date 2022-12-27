#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private: // access specifier
	int m_month;
	int m_day;
	int m_year;

public:
	// set
	void setDate(const int& month_input, const int& day_input, const int& year_input) // access function
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	void setDay(const int& day_input)
	{
		m_day = day_input;
	}

	void setYear(const int& year_input)
	{
		m_year = year_input;
	}
	
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

	// get
	const int& getDay()
	{
		return m_day;
	}
};

int main()
{
	Date today; //{ 8, 4, 2025 };
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	Date copy;
	copy.copyFrom(today);

	return 0;
}