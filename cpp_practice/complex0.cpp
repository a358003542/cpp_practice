#include "complex0.h"


complex::complex() {
	real = 0;
	img = 0;
}
complex::complex(double a, double b) {
	real = a;
	img = b;
}

complex::~complex() {

}

complex complex::operator+(const complex& b) const {
	return complex(real + b.real, img + b.img);
}
complex complex::operator-(const complex& b) const {
	return complex(real - b.real, img - b.img);
}
complex complex::operator-()const {
	return complex(-real, -img);
}
complex complex::operator*(complex& b)const {
	return complex((real * b.real - img * b.img), (real * b.img + img * b.real));
}

complex complex::operator*(double n)const {
	return complex(n * real, n * img);
}
complex complex::operator~()const {
	return complex(real, -img);
}


complex operator*(double n, const complex& a) {
	return a * n;
}


std::ostream& operator<<(std::ostream& os, const complex& v) {
	os << "(" << v.real << "," << v.img << "i)";
	return os;
}

std::istream& operator>>(std::istream& os, complex& v) {
	using std::cout;
	double a;
	double b;

	cout << "real: ";
	os >> v.real;
	os.get();

	cout << "imaginary: ";
	os >> v.img;
	os.get();

	return os;
}