#include "myhead.h"
#include <string.h>
#include <ctype.h>

int add1(int a) {
	return a + 1;
}

int gcd(int a, int b)
{
	int temp;
	while (a != b) {
		if (a > b) {
			temp = a - b;
			a = b;
			b = temp;
		}
		else if (a < b) {
			temp = b - a;
			b = temp;
		}
	}
	return a;

}

void swap_int(int& a, int& b)
{
	int temp; 
	temp = a;
	a = b;
	b = temp;
}
