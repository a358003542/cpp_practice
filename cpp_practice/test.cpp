#include <iostream>
#include <string>


int main_test(void) {
	using namespace std;


	for (int i : {1, 2, 3, 4}) {
		cout << i << endl;
	}

	
	int x;
	int &b = x;
	int* p = &x;

	b = 1;
	cout << b << endl;
	cout << *p << endl;
	cout << x << endl;

	x = 2;
	cout << b << endl;
	cout << *p << endl;
	cout << x << endl;

	return 0;
}