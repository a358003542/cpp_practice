#include <iostream>

using namespace std;

inline void print_string(string& s) { cout << s; }
void print_string(string& s, int n );


void print_string(string& s, int n) {
	if (n <= 0) return;

	for (int i = 0; i < n; i++) {
		print_string(s);
	}
}

//int main() {
int main37() {

	string s = "abc";

	print_string(s,10);

	return 0;
}