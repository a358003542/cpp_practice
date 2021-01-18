#include <stdio.h>
#include "myhead.h"

int main_test_gcd(void) {
	printf("gcd(319,377) = %d  assert = 29\n", gcd(319,377));
	printf("gcd(36,9) = %d  assert = 9\n", gcd(36, 9));
	printf("gcd(98,63) = %d  assert = 7\n", gcd(98, 63));

	printf("gcd(377,319) = %d  assert = 29\n", gcd(377, 319));
	printf("gcd(9,36) = %d  assert = 9\n", gcd(9, 36));
	printf("gcd(63,98) = %d  assert = 7\n", gcd(63, 98));
	return 0;
}