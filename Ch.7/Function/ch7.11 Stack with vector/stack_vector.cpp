//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	// int *v_ptr = new int[3]{1, 2, 3}; //�Ʒ��� ����.
//	std::vector<int> v { 1, 2, 3 };
//
//	//v.resize(2);
//	v.reserve(1024); // �޸��� �뷮�� �̸� Ȯ���ϰڴ�.
//
//	// vector�� size�� capacity�� ����. capacity ��ŭ �޸𸮸� ������ ������ size��ŭ ����Ѵٰ� �����ϸ� ��.
//	// vector�� �� ����Ϸ��� new�� delete�� ���� ȣ����� �����ϸ� ����ؾ��Ѵ�.
//
//	// �������� ������ ���� ���
//	// for (unsigned int i = 0; i < v.size(); ++i)
//	for (auto& e : v) 
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;
//
//	// ������ �߸� ������ ������.
//	int* ptr = v.data();
//	cout << ptr[2] << endl;
//
//	return 0;
//}