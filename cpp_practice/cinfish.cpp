#include <iostream>


const int Max = 5;

int main() {
	using namespace std;


	double fish[Max];

	cout << "fish #1: ";
	int i = 0;

	while (i < Max && cin >> fish[i]) {
		if (++i < Max) {
			cout << "fish #" << i + 1 << ": ";
		}
	}


	return 0;
}