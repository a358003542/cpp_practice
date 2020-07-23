#include <iostream>
#include <cmath>
#include "stonewt.h"

using std::cout;


Stonewt::Stonewt(double d, Mode mode) {
	if (mode != POUND) {
		cout << "error: POUND mode only, init it with default empty constructor.";
		stone = pds_left = pounds = 0;
		state = POUND;
	}
	else {
		stone = int(d) / Lbs_per_stn;
		pds_left = int(d) % Lbs_per_stn + d - int(d) ; 
		pounds = d ;
		state = mode;
	}
}
Stonewt::Stonewt(int s, double lbs, Mode mode) {
	if (mode == INT_POUND) {
		stone = s / Lbs_per_stn;
		pds_left = s % Lbs_per_stn;
		pounds = s;
		state = mode;
	}
	else if (mode == STONE) {
		stone = s;
		pds_left = lbs;
		pounds = s * Lbs_per_stn + lbs;
		state = mode;
	}
	else {
		cout << "error: INT_POUND or STONE mode only, init it with default empty constructor.";
		stone = pds_left = pounds = 0;
		state = POUND;
	}
}


Stonewt::Stonewt() {
	stone = pds_left = pounds = 0;
	state = POUND;
}

Stonewt::~Stonewt() {

}

void Stonewt::stone_mode() {
	state = STONE;
}
void Stonewt::pound_mode() {
	state = POUND;
}
void Stonewt::int_pound_mode() {
	state = INT_POUND;
}

Stonewt::operator int()const {
	if (state == STONE) {
		return stone;
	}
	else if (state == INT_POUND|| state == POUND) {
		return round(pounds);
	}else {
		cout << "invalid mode!";
	}
}
Stonewt::operator double()const {
	if (state == STONE) {
		return double(stone);
	}
	else if (state == INT_POUND || state == POUND) {
		return pounds;
	}
	else {
		cout << "invalid mode!";
	}
}

void Stonewt::operator=(const Stonewt& b) {
	stone = b.stone;
	pds_left = b.pds_left;
	pounds = b.pounds;
	state = b.state;
}

Stonewt Stonewt::operator+(const Stonewt& b)const {
	return Stonewt(pounds + b.pounds);
}
Stonewt Stonewt::operator-(const Stonewt& b)const {
	return Stonewt(pounds - b.pounds);
}

Stonewt Stonewt::operator*(double n)const {
	return Stonewt(n * pounds);
}

Stonewt operator*(double n, const Stonewt& a) {
	return a * n;
}


std::ostream& operator<<(std::ostream& os, const Stonewt& v) {
	if (v.state == Stonewt::POUND) {
		os << v.pounds << " pounds\n";
	}
	else if (v.state == Stonewt::INT_POUND) {
		os << round(v.pounds) << " pounds\n";
	}
	else if (v.state == Stonewt::STONE) {
		os << v.stone << " stone, " << v.pds_left << " pounds\n";
	}
	else {
		os << "Stonewt object mode is invalid.";
	}
	return os;
}

bool Stonewt::operator<(const Stonewt& b) const {
	if (state == STONE) {
		return pounds < b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) < round(b.pounds);
	}
	else if (state == POUND) {
		return pounds < b.pounds;
	}
	else {
		cout << "invalid mode!";
	}	
}
bool Stonewt::operator>(const Stonewt& b) const {
	if (state == STONE) {
		return pounds > b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) > round(b.pounds);
	}
	else if (state == POUND) {
		return pounds > b.pounds;
	}
	else {
		cout << "invalid mode!";
	}
}
bool Stonewt::operator<=(const Stonewt& b) const {
	if (state == STONE) {
		return pounds <= b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) <= round(b.pounds);
	}
	else if (state == POUND) {
		return pounds <= b.pounds;
	}
	else {
		cout << "invalid mode!";
	}
}
bool Stonewt::operator>=(const Stonewt& b) const {
	if (state == STONE) {
		return pounds >= b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) >= round(b.pounds);
	}
	else if (state == POUND) {
		return pounds >= b.pounds;
	}
	else {
		cout << "invalid mode!";
	}
}
bool Stonewt::operator==(const Stonewt& b) const {
	if (state == STONE) {
		return pounds == b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) == round(b.pounds);
	}
	else if (state == POUND) {
		return pounds == b.pounds;
	}
	else {
		cout << "invalid mode!";
	}
}
bool Stonewt::operator!=(const Stonewt& b) const {
	if (state == STONE) {
		return pounds != b.pounds;
	}
	else if (state == INT_POUND) {
		return round(pounds) != round(b.pounds);
	}
	else if (state == POUND) {
		return pounds != b.pounds;
	}
	else {
		cout << "invalid mode!";
	}
}