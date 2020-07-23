#include <iostream>
#include <fstream>
#include <cstdlib> // rand srand 
#include <ctime> //time
#include "vector.h"


//int main() {
int main52(){
	using namespace std;
	using VECTOR::Vector;

	srand(time(0)); // time(0) the current time, srand reset random seed.
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream outFile;
	outFile.open("randwalk.txt");

	cout << "Enter target distance (q to quit): ";
	while (cin >> target) {
		cout << "Enter step length: ";
		if (!(cin >> dstep)) break;

		outFile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		outFile << steps << ": " << result << endl;

		while (result.magval() < target) {
			direction = rand() % 360; //generate 0-359 random number
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			
			outFile << steps << ": " << result << endl;
		}
		cout << "After " << steps << " steps, the subject has the following location:\n";
		outFile << "After " << steps << " steps, the subject has the following location:\n";

		cout << result << endl;
		outFile << result << endl;

		result.polar_mode();

		cout << " or\n" << result << endl;
		outFile << " or\n" << result << endl;

		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		outFile << "Average outward distance per step = "
			<< result.magval() / steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n') continue;

	outFile.close();
	return 0;
}