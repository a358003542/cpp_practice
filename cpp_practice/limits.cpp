#include <iostream>
#include <climits>


int main4() {
	using namespace std;

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(long long) << " bytes." << endl;


	cout << "int max value is " << n_int << " ." << endl;
	cout << "short max value is " << n_short << " ." << endl;
	cout << "long max value is " << n_long << " ." << endl;
	cout << "long long max value is " << n_llong << " ." << endl;
	
	cout << "one byte has " << CHAR_BIT << " bits" << endl;
 
	return 0;
}