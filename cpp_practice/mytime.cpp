#include "mytime.h"
#include <iostream>


MyTime::MyTime() {
	hours = 0;
	minutes = 0;
}


MyTime::MyTime(int h, int m) {
	hours = h;
	minutes = m;
}

void MyTime::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void MyTime::AddHr(int h) {
	hours += h;
}

void MyTime::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

MyTime MyTime::operator+(const MyTime& t) const {
	MyTime sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

MyTime MyTime::operator-(const MyTime& t) const {
	MyTime diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;

	return diff;
}

MyTime MyTime::operator*(double mult) const {
	MyTime result;
	long total = hours * mult * 60 + minutes * mult;

	result.minutes = total % 60;
	result.hours = total / 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, const MyTime& t) {
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}

void MyTime::Show()const {
	std::cout << hours << " hours, " << minutes << " minutes";
}