#include <iostream>
#include "vector.h"

int main() {
	//int main51(){
	using std::cout;
	using std::endl;
	using VECTOR::Vector;

	Vector v1;
	Vector v2(4, 3);
	Vector v3(2, 5);

	Vector v4;
	Vector v5;
	Vector v6;
	Vector v7;
	Vector v8;

	cout << "v1 = " << v1 << endl;

	v4 = v2 + v3;
	cout << "v4 = " << v4 << endl;

	v4.reset(9, 8);
	cout << "v4 = " << v4 << endl;

	v5 = -v4;
	cout << "v5 = " << v5 << endl;

	v6.reset(10, 45, VECTOR::Vector::POL);
	cout << "v6 = " << v6 << endl;
	v6.rect_mode();
	cout << "v6 = " << v6 << endl;

	v7 = 2 * v5 ;
	cout << "v7 = " << v7 << endl;
	
	v8 = v7 - v6;
	cout << "v8 = " << v8 << endl;



	return 0;
}