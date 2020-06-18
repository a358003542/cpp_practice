#include <iostream>

int main20() {
	using namespace std;

	int rows;

	cout << "Enter number of rows: ";

	cin >> rows;


	for (int i = 0; i < rows; i++) {
		for (int j = i+1; j < rows; j++) { //here we can not use the if statement.
			cout << ".";
		}

		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}

		cout << endl;
	}


	return 0;
}