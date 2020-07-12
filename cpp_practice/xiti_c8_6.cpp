#include <iostream>
#include <assert.h>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int n);

template <> char* maxn(char* arr[], int n);

template <typename T>
T maxn(T arr[], int n) {
	T max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

template<> char * maxn(char * arr[], int n) {
	char * max = arr[0];
	for (int i = 0; i < n; i++) {
		if (strlen(arr[i]) > strlen(max)) {
			max = arr[i];
		}
	}
	return max;
}


//int main() {
int main40() {

	int arr1[6] = {-5, 45,54,1,8,0 };
	int max1;
	max1 = maxn(arr1,6);
	assert(max1 == 54);


	double arr2[4] = { 5.58,6.5,3.14,1.25 };
	double max2;
	max2 = maxn(arr2,4);
	assert(max2 == 6.5);

	char s1[] = "abc";
	char s2[] = "abc def";
	char s3[] = "";
	char s4[] = "hello world.";
	char s5[] = "a";

	char* arr3[5] = {s1,s2,s3,s4,s5 };
	char* max3;
	max3 = maxn(arr3, 5);
	assert(strlen(max3) == 12);

	return 0;
}