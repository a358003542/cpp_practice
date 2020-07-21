#include <iostream>
#include "list.h"


ItemType multiply2(ItemType& item) {
	return item * 2;
}

//int main() {
	int main49(){
	List list1 = List();

	list1.show_list();

	list1.append(10);
	list1.append(20);

	list1.show_list();

	list1.visit(multiply2);

	list1.show_list();

	return 0;
}