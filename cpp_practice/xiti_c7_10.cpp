#include <iostream>

using namespace std;

typedef double (*func_call)(double, double);

double addition(double , double );
double subtraction(double, double);
double multiplication(double, double);

double calculate(double x, double y, func_call func);

double calculate(double x, double y, func_call func) {
	return (*func)(x, y);
}
double addition(double x, double y) {
	cout << "running addition...\n";
	return x + y;
}
double subtraction(double x, double y) {
	cout << "running subtraction...\n";
	return x - y;
}
double multiplication(double x, double y) {
	cout << "running multiplication...\n";
	return x * y;
}


//int main() {
int main36() {
	double (*pf[3])(double, double);

	pf[0] = addition;
	pf[1] = subtraction;
	pf[2] = multiplication;

	for (int i : {0, 1, 2}) {
		double q = calculate(2.5, 10.4, pf[i]);
		cout << "result: " << q << endl;
	}

	return 0;
}