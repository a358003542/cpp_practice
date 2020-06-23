#include <iostream>


const int Max = 5;

int main24() {
	using namespace std;

	double fish[Max];

	cout << "fish #1: ";
	int i = 0;

	while (i < Max) {
		while (!(cin >> fish[i])) { //failed for input
			cin.clear();
			while (cin.get() != '\n') { //clear the wrong input line
				continue;
			}
			if (i < Max) {
				cout << "fish #" << i + 1 << ": ";
			}
		}
		i++;
		if (i < Max) {
			cout << "fish #" << i + 1 << ": ";
		}
	}

	double total = 0;
	for (int j = 0; j < i; j++) {
		total += fish[j];
	}
	if (i == 0) {
		cout << "No fish\n";
	}
	else {
		cout << "average weight is " << total / i;
	}

	return 0;
}