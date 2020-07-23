#pragma once


#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>


class complex {
private:
	double real; //real
	double img; // img
public:
	complex();
	complex(double a, double b);
	~complex();

	//operator overloading
	complex operator+(const complex& b) const;
	complex operator-(const complex& b) const;
	complex operator-()const;
	complex operator*(double n)const;
	complex operator*(complex& b)const;
	complex operator~()const;

	//friends
	friend complex operator*(double n, const complex& a);
	friend std::ostream& operator<<(std::ostream& os, const complex& v);
	friend std::istream& operator>>(std::istream& os, complex& v);
};


#endif // 