#include <iostream>
#include "stonewt.h"


//int main() {
int main53() {

	using namespace std;
	
	Stonewt stonewt_array[6] = {
		{9,2.8,Stonewt::STONE},
		{11,0,Stonewt::STONE},
		{6.3},
	};

	for (int x = 3; x < 6; x++) {
		cout << "Please input object weight in pounds: ";
		double pounds;
		cin >> pounds;
		stonewt_array[x] = Stonewt(pounds);
	}

	Stonewt *max = stonewt_array;
	Stonewt *min = stonewt_array;
	int count = 0;

	for (int i = 0; i < 6; i++) {
		cout << stonewt_array[i];
	}

	cout << "----------------------\n";

	for (int i=0; i < 6; i++) {
		if (stonewt_array[i] < *min) {
			min = &stonewt_array[i];
		}

		if (stonewt_array[i] > *max) {
			max = &stonewt_array[i];
		}

		if (stonewt_array[i] == Stonewt(11, 0, Stonewt::STONE)) {
			count++;
		}
	}
	cout << "equal 11 stone elements number is: " << count << endl;
	cout << "max = " << *max;
	cout << "min = " << *min;
	cout << "max - min = " << *max - *min;
	cout << "2 * max = " << 2 * *max;


	return 0;
}