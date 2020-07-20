#include "person.h"
#include <iostream>



Person::Person(const std::string& ln, const char* fn ) {
	strcpy_s(this->fname, fn);
	this->lname = ln;
}

void Person::Show() const {
	std::cout << this->fname << " " << this->lname << std::endl ;
}

void Person::FormalShow() const {
	std::cout << this->lname << " " << this->fname << std::endl;
}