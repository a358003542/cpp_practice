#include "move.h"
#include <iostream>


Move::Move(double a, double b) {
	this->x = a;
	this->y = b;
}

void Move::showmove() const {
	using std::cout;
	cout << "<Move x=" << this->x << " y=" << this->y << ">\n";
}

Move Move::add(const Move& m) const {
	double new_x = this->x + m.x;
	double new_y = this->y + m.y;
	return Move(new_x, new_y);
}

void Move::reset(double a, double b) {
	this->x = a;
	this->y = b;
}