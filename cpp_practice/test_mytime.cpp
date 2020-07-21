#include <iostream>
#include "mytime.h"


//int main() {
	int main50(){
	using std::cout;
	using std::endl;

	MyTime planning;
	MyTime coding(4, 35);
	MyTime fixing(2, 55);
	MyTime total;
	MyTime diff;
	MyTime adjusted;
	MyTime adjusted2;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	diff = coding - fixing;
	cout << "coding - fixing = ";
	diff.Show();
	cout << endl;

	adjusted = coding * 1.5;
	cout << "coding * 1.5 = ";
	adjusted.Show();
	cout << endl;

	adjusted2 = 1.5 * coding ;
	cout << "1.5 * coding = ";
	cout << adjusted2 <<  endl;

	return 0;
}