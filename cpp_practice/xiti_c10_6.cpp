#include <iostream>
#include "move.h"


//int main() {
int main48() {

	Move m1 = Move();
	m1.showmove();

	Move m2 = Move(3, 5);
	Move m3 = Move(2.2, 5.0);
	Move m4 = m3.add(m2);
	m4.showmove();

	m4.reset(9.8, 0);
	m4.showmove();

	return 0;
}