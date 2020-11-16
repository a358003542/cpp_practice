#include "classic.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	strcpy_s(performers, s1);
	strcpy_s(label, s2);
	selections = n;
	playtime = x;
}


Cd::Cd(const Cd& d) {
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;
}

Cd& Cd::operator=(const Cd& d) {
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

void Cd::Report() const {
	cout << "performers: " << this->performers << endl;
	cout << "label: " << this->label << endl;
	cout << "selections: " << this->selections << endl;
	cout << "playtime: " << this->playtime << endl;
}

Classic::Classic(const char* wks, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	strcpy_s(works, wks);
}

Classic::Classic(const char* wks, const Cd& c) : Cd(c) {
	strcpy_s(works, wks);
}

Classic::Classic() : Cd() {
	works[0] = '\0';
}

Classic& Classic::operator=(const Classic& d) {
	Cd::operator=(d);
	strcpy_s(works, d.works);
	return *this;
}

void Classic::Report() const {
	Cd::Report();
	cout << "works: " << this->works << endl;
}

