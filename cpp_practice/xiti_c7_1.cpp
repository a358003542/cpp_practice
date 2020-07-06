#include <iostream>
#include <cctype>

using namespace std;

double calc_harmonic_mean(double, double);

double calc_harmonic_mean(double x, double y) {
	double result;

	result = (2.0 * x * y) / (x + y);
	return result;
}


//int main() {
int main32(){
	double f1;
	double f2;
	double result;
	
	while (true) {
		if ((cout << "please input two number:") && (cin >> f1 >> f2)) {
			bool input_line_right = true;
			char ch;

			while (cin.get(ch)) {
				if (ch == '\n') {
					break;
				}
				else if (isblank(ch)) {
					;
				}
				else {
					cin.clear();
					while (cin.get() != '\n') continue;
					cout << "Bad input!\n";
					input_line_right = false;
					break;
				}
			}

			if (input_line_right) {
				if (f1 == 0 || f2 == 0) break;

				result = calc_harmonic_mean(f1, f2);
				cout << f1 << " and " << f2 << " harmonic mean is: " << result << endl;
			}
		}
		else {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Bad input!";
		}
	}

	return 0;
}