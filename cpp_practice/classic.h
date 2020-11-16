#pragma once


#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd {
private:
	char performers[50];
	char label[20];
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	
	virtual void Report() const;

	Cd& operator=(const Cd& d);

	virtual ~Cd() {};
};

class Classic : public Cd {
private:
	char works[1000];
public:
	Classic(const char* wks,const char* s1, const char* s2, int n, double x );
	Classic(const char* wks,const Cd& c );
	Classic();

	virtual void Report() const;
	Classic& operator=(const Classic& d);

};


#endif 