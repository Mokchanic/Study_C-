//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	// int *v_ptr = new int[3]{1, 2, 3}; //아래와 같음.
//	std::vector<int> v { 1, 2, 3 };
//
//	//v.resize(2);
//	v.reserve(1024); // 메모리의 용량을 미리 확보하겠다.
//
//	// vector는 size와 capacity가 있음. capacity 만큼 메모리를 가지고 있으며 size만큼 사용한다고 생각하면 됨.
//	// vector를 잘 사용하려면 new와 delete가 적게 호출될지 생각하며 사용해야한다.
//
//	// 이전에는 다음과 같이 사용
//	// for (unsigned int i = 0; i < v.size(); ++i)
//	for (auto& e : v) 
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;
//
//	// 강제로 잘린 데이터 가져옴.
//	int* ptr = v.data();
//	cout << ptr[2] << endl;
//
//	return 0;
//}