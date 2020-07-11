#include <iostream>
#include <assert.h>

using namespace std;

template <typename T>
T max5(T arr[]);

template <typename T>
T max5(T arr[]) {
	T max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

//int main() {
int main39() {

	int arr1[5] = {45,54,1,8,0 };
	int max1 = 0;
	max1 = max5(arr1);
	assert(max1 == 54);


	double arr2[5] = { 5.58,6.5,0,3.14,1.25 };
	double max2 = 0;
	max2 = max5(arr2);
	assert(max2 == 6.5);

	return 0;
}