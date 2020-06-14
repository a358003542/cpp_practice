#include <iostream>
#include <cstring>

int main10(void) {
	using namespace std;

	char first_name[20];
	char last_name[20];
	char name[40];


	cout << "What is your first name? ";
	cin.getline(first_name, 20);

	cout << "What is your last name? ";

	cin.getline(last_name,20);

	strcpy_s(name, last_name);
	strcat_s(name, ", ");
	strcat_s(name, first_name);

	cout << "Here's the information in a single string: " << name << endl;

	return 0;
}