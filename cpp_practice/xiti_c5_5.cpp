#include <iostream>


int main16() {
	using namespace std;


	int temp;
	int sum = 0;

	do {
		cout << "please input a number, input 0 quit : ";
		cin >> temp;
		sum += temp;
	} while (temp);

	cout << "your input number summation is " << sum << endl;


	return 0;
}