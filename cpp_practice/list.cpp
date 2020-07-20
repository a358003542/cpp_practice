#include "list.h"
#include <iostream>


List::List() {
	num = 0;
}

bool List::is_full() const {
	if (num == MAX) {
		return true;
	}
	else {
		return false;
	}
}

bool List::is_empty() const {
	if (num == 0) {
		return true;
	}
	else {
		return false;
	}
}

void List::show_list() const {
	using std::cout;
	cout << "[";
	for (int i = 0; i < num; i++) {
		cout << items[i] << ", ";
	}
	cout << "]\n";
}

void List::append(ItemType item) {
	using std::cout;
	if (!is_full()) {
		items[num++] = item;
	}
	else {
		cout << "list is full.";
	}
}

void List::visit(func_type pf) {
	for (int i = 0; i < num; i++) {
		items[i] = (*pf)(items[i]);
	}
}