#include <iostream>

using namespace std;
void help();

void help() {
	cout << "c) carnivore              p) pianist\n" <<
		"t) tree                   g) game\n";
}



int main27() {

	cout << "Please enter one of the following choices:\n";

	help();

	char ch;

	(cin >> ch).get();

	bool quit = false;

	while (!quit) {
		quit = true;
		switch (ch) {
		case 'c':
			cout << "A maple is a carnivore";
			break;
		case 'p':
			cout << "A maple is a pianist";
			break;
		case 't':
			cout << "A maple is a tree";
			break;
		case 'g':
			cout << "A maple is a game";
			break;
		default:
			cout << "Please enter a c, p, t, or g: ";
			(cin >> ch).get();
			quit = false;

		}
	}


	return 0;
}