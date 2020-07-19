#include <iostream>
#include "sales.h"


//int main() {
int main44(){
	double ar[4] = { 1.0,3.2,2.5,5.6 };

	using SALES::Sales;
	using SALES::setSales;
	using SALES::showSales;

	Sales s;

	setSales(s, ar, 4);

	showSales(s);

	Sales s2;
	setSales(s2);

	showSales(s2);

	return 0;
}