#include <iostream>
#include <string>

int main9(void) {
	using namespace std;

	string first_name;
	string last_name;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, first_name);

	cout << "What is your last name? ";

	getline(cin, last_name);

	cout << "What letter grade do you deserve? ";
	cin.get(grade).get();

	cout << "What is your age? ";

	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: "; 
	cout.put(grade + 1);
    cout << endl;
	cout << "Age: " << age << endl;

	return 0;
}