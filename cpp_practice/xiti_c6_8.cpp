#include <iostream>
#include <fstream>

int main() {
	using namespace std;

	string filename;

	cout << "Please input the filename you want to open: ";

	cin >> filename;

	ifstream inFile;

	inFile.open(filename);
	// check the file is open
	if (!inFile.is_open()) {
		cout << "Could not open the file " << filename << endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	int count = 0;
	while (inFile.get(ch)) {
		count++;
	}

	cout << "This file contains " << count << " characters.\n";

	inFile.close();

	return 0;
}