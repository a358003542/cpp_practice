#pragma once

#ifndef LIST_H_
#define LIST_H_

#define ItemType double
typedef ItemType(*func_type)(ItemType&);

class List {
private:
	enum { MAX = 10 };
	ItemType items[MAX];
	int num;
public:
	List(); // default empty list
	bool is_full() const;
	bool is_empty() const;
	void show_list()const;
	void append(ItemType item);
	void visit(func_type pf);
};


#endif // !LIST_H_
