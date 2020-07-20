#include <iostream>
#include "golf.h"


//int main() {
int main47() {

	Golf golf1 = Golf("bob sam", 10);
	golf1.showgolf();

	Golf golf2 = Golf();
	std::cout << "test handicap function....\n";
	golf2.showgolf();
	golf2.set_handicap(18);
	golf2.showgolf();

	return 0;
}