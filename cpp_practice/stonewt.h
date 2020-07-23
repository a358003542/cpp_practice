#pragma once

#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt {
public:
	enum Mode { STONE, POUND, INT_POUND};

private:
	const int Lbs_per_stn = 14;
	int stone;
	Mode state;
	double pds_left;
	double pounds;
public:
	Stonewt(double d, Mode mode=POUND); // mode pound
	Stonewt(int s, double lbs=0, Mode mode = STONE); // mode stone or int_pound
	Stonewt();
	~Stonewt();
	void stone_mode();
	void pound_mode();
	void int_pound_mode();

	//conversion function
	explicit operator int() const;
	explicit operator double() const;

	//operator overloading
	Stonewt operator+(const Stonewt& b) const;
	Stonewt operator-(const Stonewt& b) const;
	Stonewt operator*(double n)const;

	void operator=(const Stonewt& b);

	// operator compare
	bool operator<(const Stonewt& b) const;
	bool operator>(const Stonewt& b) const;
	bool operator>=(const Stonewt& b) const;
	bool operator<=(const Stonewt& b) const;
	bool operator==(const Stonewt& b) const;
	bool operator!=(const Stonewt& b) const;

	//friends
	friend Stonewt operator*(double n, const Stonewt& a);
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& v);
};



#endif // !STONEWT_H_
