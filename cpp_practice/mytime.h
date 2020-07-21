#pragma once

#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

class MyTime {
private:
	int hours;
	int minutes;
public:
	MyTime();
	MyTime(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	MyTime operator+(const MyTime & t) const;
	MyTime operator-(const MyTime& t) const;
	MyTime operator*(double mult) const;
	friend MyTime operator*(double m, const MyTime& t) { return t * m; };
	friend std::ostream & operator<<(std::ostream& os, const MyTime& t);
	void Show()const;
};

#endif // !MYTIME_H_
