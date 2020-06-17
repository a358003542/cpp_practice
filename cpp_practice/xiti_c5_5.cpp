#include <iostream>


int main17() {
	using namespace std;

	int sum = 0;

	string months[12] = { "jan","feb","march","april","may","june","july","august","september","october","november","december" };
	int sales[12] = {};

	int count = 0;
	for (string month : months) {
		cout << "please input the sale of amount in " << month << " : ";
		cin >> sales[count];

		count++;
	}

	for (int x : sales) {
		sum += x;
	}
	cout << "this year's sale amount is: " << sum << endl;

	return 0;
}