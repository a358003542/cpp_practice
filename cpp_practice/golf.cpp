#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf& g, const char* name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}


int setgolf(golf& g) {
	using std::cout;
	using std::cin;

	cout << "please input name: ";
	cin.getline(g.fullname, Len);

	if (strlen(g.fullname) == 0) return 0;

	cout << "please input handicap: ";
	(cin >> g.handicap).get();

	return 1;
}

void handicap(golf& g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf& g) {
	using std::cout;
	using std::endl;
	
	if (strlen(g.fullname) > 0) {
		cout << g.fullname << "'s handicap is: " << g.handicap << endl;
	}
}

Golf::Golf() {
	using std::cout;
	using std::cin;

	cout << "please input name: ";
	cin.getline(this->fullname, Len);

	if (strlen(this->fullname) != 0) {
		cout << "please input handicap: ";
		(cin >> this->handicap).get();
	}
}

Golf::Golf(const char* name, int hc) {
	strcpy_s(this->fullname, name);
	this->handicap = hc;
}

void Golf::showgolf() {
	using std::cout;
	using std::endl;

	if (strlen(this->fullname) > 0) {
		cout << this->fullname << "'s handicap is: " << this->handicap << endl;
	}
}

void Golf::set_handicap(int hc) {
	this->handicap = hc;
}