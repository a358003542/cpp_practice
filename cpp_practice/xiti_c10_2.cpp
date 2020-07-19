#include <iostream>
#include "person.h"


int main() {
	using namespace std;

	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");

	one.Show();
	cout << endl;
	one.FormalShow();

	two.Show();
	cout << endl;
	two.FormalShow();

	three.Show();
	cout << endl;
	three.FormalShow();

	return 0;
}