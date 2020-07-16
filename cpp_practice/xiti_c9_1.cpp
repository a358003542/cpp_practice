#include <iostream>
#include "golf.h"


//int main() {
int main43(){
	const int ARR_MAX = 10;
	golf golf_arr[ARR_MAX];

	int res = 1;

	for (int i = 0; i < ARR_MAX; i++) {	
		if (res == 0) break;

		if (i == 0) {
			setgolf(golf_arr[i], "bob sam", 10);
		}
		else {
			res = setgolf(golf_arr[i]);
		}

		showgolf(golf_arr[i]);
	}

	std::cout << "test handicap function....\n";
	showgolf(golf_arr[0]);
	handicap(golf_arr[0], 18);
	showgolf(golf_arr[0]);

	return 0;
}