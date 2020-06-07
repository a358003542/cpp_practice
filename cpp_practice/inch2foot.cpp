#include <iostream>
#include <cmath>

const int CONVERSION = 12;


int main5(void) {
	using namespace std;

	int height_inch;

	cout << "please input your height value in inch: ";

	cin >> height_inch;

	if (height_inch % CONVERSION == 0) {
		cout << "your height value is " << height_inch / CONVERSION
			<< " foots." << endl;
	}
	else {
		cout << "your height value is " << height_inch / CONVERSION
			<< " foots and " << height_inch % CONVERSION << "inchs." << endl;
	}

	return 0;

}