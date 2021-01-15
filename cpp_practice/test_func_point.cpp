#include <iostream>

using namespace std;

void estimate(int, double(*pf)(int));
double test_func(int a);


double test_func(int a) {
	double b;
	b = a * 3.14;

	cout << a << " * 3.14 = " << b << endl;
	return b;
}

void estimate(int repeat, double(*pf)(int)) {
	for (int i = 0; i < repeat; i++) {
		(*pf)(3);
	}
}

int main31() {
	estimate(10, test_func);
	return 0;
}