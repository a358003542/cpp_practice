#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct Pizza {
	string name;
	float diameter;
	float weight;
};

int main(void) {
	int x;

	cout << "please input the array length: ";
	(cin >> x).get();

	vector<Pizza *> vec;

	for (int i = 0; i < x; i++) {
		Pizza* ppizza = new Pizza;

		cout << "Please input your pizza name: ";
		
		getline(cin, ppizza->name);

		cout << "Please input your pizza diameter: ";
		(cin >> ppizza->diameter).get();

		cout << "Please input your pizza weight: ";
		(cin >> ppizza->weight).get();

		cout << "-----------------" << endl;

		vec.push_back(ppizza);
	}


	for (int i = 0; i < x; i++) {
		cout << "CandyBar " << vec[i]->name << " weight: " << vec[i]->diameter <<
			" and calories: " << vec[i]->weight << endl;
	}

	for (int i = 0; i < x; i++) {
		delete vec[i];
	}

	return 0;
}