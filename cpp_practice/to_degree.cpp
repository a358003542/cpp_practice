#include <iostream>
#include <cmath>

const float CONVERSION = 60;


int main6(void) {
	using namespace std;

	int degrees;
	int minutes;
	int seconds;
	float result;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl ;

	cout << "First, enter the degrees: ";
	cin >> degrees;

	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;

	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	result = degrees + minutes / CONVERSION + seconds / (CONVERSION * CONVERSION);

	cout << degrees << " degrees, "  << minutes << " minutes, " << seconds << " seconds = " <<
			result
			<< " degrees." << endl;
	

	return 0;

}