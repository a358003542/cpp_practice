#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int size);
void revalue(double r, double ar[], int n);
double sum_array(const double* ar_begin, const double* ar_end);

//int main(){
int main30() {
	using namespace std;

	double properties[Max];

	int size = fill_array(properties, Max);

	show_array(properties, size);

	if (size > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Bad input; Please enter a number: ";
		}

		revalue(factor, properties, size);
		show_array(properties, size);
		
		double total;
		total = sum_array(properties, properties + size);
		cout << "array total sum = " << total << " .\n";
	}

	return 0;
}


double sum_array(const double* ar_begin, const double* ar_end) {
	const double* pt;
	double total = 0;

	for (pt = ar_begin; pt != ar_end; pt++) {
		total += *pt;
	}
	return total;
}

int fill_array(double ar[], int limit) {
	using namespace std;

	double temp;

	int i;

	for (i = 0; i < limit; i++) {
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;

		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) break;
		ar[i] = temp;
	}
	return i;
}



void show_array(const double ar[], int size) {
	using namespace std;

	for (int i = 0; i < size; i++) {
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], int n) {
	for (int i = 0; i < n; i++) {
		ar[i] *= r;
	}
}