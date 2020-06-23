#include <iostream>

int calc_tax(int);

int calc_tax(int x) {
	float tax = 0;
	int temp = 0;

	temp = x - 35000;
	if (temp > 0) {
		tax += (temp * 0.2);
		x -= temp;
	}

	temp = x - 15000;
	if (temp > 0) {
		tax += (temp * 0.15);
		x -= temp;
	}

	temp = x - 5000;
	if (temp > 0) {
		tax += (temp * 0.10);
		x -= temp;
	}

	return tax;
}

int main28() {
	using namespace std;

	int tvarps = 0;
	int count = 0;

	do {
		if (tvarps < 0) {
			break;
		}

		if (count != 0) {
			cout << "your income tax is " << calc_tax(tvarps) << " tvarps.\n";
		}
		count += 1;

		cout << "please input how many tvarps of your income: ";
	} while (cin >> tvarps);


	return 0;
}