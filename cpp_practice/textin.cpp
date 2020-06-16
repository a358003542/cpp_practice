#include <iostream>


int main14() {
	using namespace std;

	char ch;
	int count = 0;

	cout << "Enter characters:\n";

	while (cin.get(ch)) { //Ctrl+Z 
		cout << ch;
		++count;
	}

	cout << endl << count << endl;

	return 0;
}