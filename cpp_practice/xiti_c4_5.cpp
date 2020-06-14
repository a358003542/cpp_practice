#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
	string name;
	float weight;
	int calories;
};

int main11(void) {
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};

	cout << "CandyBar " << snack.name << " weight: " << snack.weight <<
		" and calories: " << snack.calories << endl;

	return 0;
}