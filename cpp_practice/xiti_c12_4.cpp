#include <iostream>
#include <cctype>

typedef unsigned long Item;

class Stack2 {
private:
	enum { MAX = 10 };
	Item * pitems;
	int size;
	int top;
public:
	Stack2(int n = MAX);
	Stack2(const Stack2& st);
	~Stack2();

	bool isempty()const;
	bool isfull() const;
	
	bool push(const Item& item);
	bool pop(Item& item);
	Stack2& operator=(const Stack2& st);
	friend std::ostream& operator<<(std::ostream& os, const Stack2& s);
};


Stack2::Stack2(int n) {
	size = n;
	top = 0;
	pitems = new Item[size];
}

std::ostream& operator<<(std::ostream& os, const Stack2& s) {
	using std::endl;
	os << "Stack2 size: " << s.size << endl 
		<< "Stack2 top: " << s.top << endl;

	for (int i = 0; i < s.top; i++) {
		os << "Stack values " << i << ": " << s.pitems[i] << endl;
	}
	return os;
}

Stack2::Stack2(const Stack2& st) {
	size = st.size;
	top = st.top;

	pitems = new Item[size];

	for (int i = 0; i < st.top; i++) {
		pitems[i] = st.pitems[i];
	}
}

Stack2& Stack2::operator=(const Stack2& st) {
	if (this == &st) return *this;

	size = st.size;
	top = st.top;

	delete[] pitems;
	pitems = new Item[size];

	for (int i = 0; i < st.top; i++) {
		pitems[i] = st.pitems[i];
	}
	return *this;
}

Stack2::~Stack2() {
	delete[] pitems;
}

bool Stack2::isempty() const {
	return top == 0;
}

bool Stack2::isfull() const {
	return top == size;
}

bool Stack2::push(const Item& item) {
	if (top < size) {
		pitems[top++] = item;
		return true;
	}
	else {
		return false;
	}
}

bool Stack2::pop(Item& item) {
	if (top > 0) {
		item = pitems[--top];
		return true;
	}
	else {
		return false;
	}
}


int main() {
	using namespace std;

	Stack2 st1(3);
	Stack2 st2;
	Item tmp;
	st1.push(1);
	cout << "st1-----------\n";
	cout << st1;

	st2 = st1;
	cout << "st2------------\n";
	cout << st2;

	st2.pop(tmp);
	st2.push(3);
	st2.push(4);
	cout << "st2-------------\n";
	cout << st2;

	Stack2 st3 = st2;

	cout << "st3-------------\n";
	cout << st3;

	return 0;
}