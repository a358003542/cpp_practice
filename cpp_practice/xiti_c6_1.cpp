#include <iostream>
#include <cctype>

int main26() {
	using namespace std;

	char ch;

	while (cin.get(ch)) {
		if (ch == '@') {
			break;
		}
		else if (isdigit(ch)) {
			continue;
		}
		else if (isupper(ch)) {
			cout.put(tolower(ch));
		}
		else if (islower(ch)) {
			cout.put(toupper(ch));
		}
		else {
			cout.put(ch);
		}
	}

	return 0;
}