#include <iostream>
#include <cstring>

using namespace std;
const int SLEN = 50;

struct CandyBar {
	char name[SLEN];
	double weight;
	int calories;
};

CandyBar& init_CandyBar(CandyBar& candybar, const char * name="Millennium Munch", double weight=2.85, int calories=350);
void print_CandyBar(const CandyBar& candybar);


CandyBar& init_CandyBar(CandyBar& candybar, const char * name, double weight, int calories) {
	strcpy_s(candybar.name, SLEN, name);
	candybar.weight = weight;
	candybar.calories = calories;
	return candybar;
}

void print_CandyBar(const CandyBar& candybar) {
	cout << "candybar name: " << candybar.name <<
		" weight: " << candybar.weight << " calories: " << candybar.calories;
}

//int main() {
int main38() {

	CandyBar candybar;
	
	init_CandyBar(candybar);

	print_CandyBar(candybar);

	return 0;
}