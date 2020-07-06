#include <iostream>

using namespace std;

typedef double(*test_func_type)(int);
void estimate(int , test_func_type);
double test_func(int a);


double test_func(int a) {
	double b;
	b = a * 3.14;

	cout << a << " * 3.14 = " << b << endl;
	return b;
}

void estimate(int repeat, test_func_type pf) {
	for (int i=0; i < repeat; i++) {
		(*pf)(3);
	}
}

int main31() {
	estimate(10, test_func);
	return 0;
}