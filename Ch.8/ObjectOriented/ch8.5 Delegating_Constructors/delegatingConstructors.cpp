#include <iostream>
#include <string>

using namespace std;

class Student 
{
private:
	int m_id;
	string m_name;

public:
	// �ص� ������ ����õ
	Student(const string& name_in)
		//:Student(0, name_in)
	{
		init(0, name_in);
	}

	Student(const int& id_in, const string& name_in)
		//:m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}

	void init(const int& id_in, const string& name_in) // �ʱ�ȭ �ڵ带 �и���.
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student student1(0, "jack jack");
	student1.print();

	Student st2("Dash");
	st2.print();

	return 0;
}