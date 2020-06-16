#include <iostream>


int main15() {
	using namespace std;

	int start_int;
	int end_int;
	int sum = 0;
	cout << "please input the start integer: ";

	cin >> start_int;

	cout << "please input the end integer: ";
	cin >> end_int;


	for (int n = start_int; n <= end_int; n++) {
		sum += n;
	}

	cout << "the integer in range " << start_int << " - " << end_int << " summation is " << sum << endl;


	return 0;
}