#include <iostream>

using namespace std;

int factorial(int);


int factorial(int x) {
	if (x == 0) {
		return 1;
	}else {
		return factorial(x - 1) * x;
	}
}


//int main() {
int main34() {
	int n;
	int result;

	while (true) {
		if ((cout << "please input one integer number:") && (cin >> n)) {
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
				if (n < 0) break;

				result = factorial(n);
				cout << n << " factorial is: " << result << endl;
			}
		}
		else {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Bad input!\n";
		}
	}

	return 0;
}