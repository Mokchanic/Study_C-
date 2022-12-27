#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//			print()

class Friend
{
public: // access specifier (public, private, protected) 접근지정자.
	string m_name;
	string address_; //google style
	int    age;
	double height;
	double weight;

	void print() // 모두 다 같은 멤버
	{
		cout << m_name << " " << address_ << " " << age << " " << height << " "
			<< weight << endl;
	}
};

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " "
		<< weight << endl;
}

int main()
{
	Friend jj{ "jack jack", "Uptown", 2, 170, 68 }; // jj: instanciation, Inner Data: instance

	// or
	// jj.name = "jack jack"; ...

	jj.print();
	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	//print(jj);
	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
		
	//동적 할당
	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int>    age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	return 0;
}