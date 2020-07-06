#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int getinfo(student pa[], int n) {
	int entered = 0;

	for (int i = 0; i < n; i++) {
		cout << "please input student fullname: ";
		cin.getline(pa[i].fullname, SLEN);

		cout << "please input student hobby: ";
		cin.getline(pa[i].hobby, SLEN);

		cout << "please input student ooplevel: ";
		(cin >> pa[i].ooplevel).get();

		entered += 1;
	}
	return entered;
}


void display1(student st) {
	cout <<"student " << st.fullname <<
		" hobby: " << st.hobby <<
		" ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout <<"student " << ps->fullname <<
		" hobby: " << ps->hobby <<
		" ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		display1(pa[i]);
	}
}

//int main() {
int main35() {
	cout << "Enter class size: ";

	int class_size;
	cin >> class_size;

	while (cin.get() != '\n') continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;

	cout << "Done\n";

	return 0;
}