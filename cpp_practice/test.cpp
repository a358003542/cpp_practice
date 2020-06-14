#include <iostream>
#include <string>
#include <vector>


int main0(void) {
	using namespace std;

	int x;

	cout << "please input the array length: ";
	cin >> x;

	vector<int> vec;

	for (int i = 0; i < x; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	for (int i = 0; i < x; i++) {
		cout << vec[i] << endl;
	}

	return 0;
}