#include <iostream>


int main19() {
	using namespace std;

	int sum_all = 0;

	string months[12] = { "jan","feb","march","april","may","june","july","august","september","october","november","december" };
	int sales[3][12] = {};

	

	for (int i = 0; i < 3; i++) {
		int count = 0;
		int sum_year = 0;

		for (string month : months) {
			cout << "please input year " << i << " the sale of amount in " << month << " : ";
			cin >> sales[i][count];

			sum_year += sales[i][count];

			count++;
		}

		cout << "this year "<< i << "all sale amount is: " << sum_year << endl;

		sum_all += sum_year;
	}

	cout << "the three year all sale amount is: "<< sum_all  << endl;

	return 0;
}