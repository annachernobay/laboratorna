#include "Reader.h"

Reader::Reader()
    : name("Unknown"), booksCount(0) {
    cout << "Default constructor" << endl;
}
Reader::Reader(string n, int i, int c) : name(n), id(i), booksCount(c) {
    cout << "Overloaded constructor" << endl;
}

Reader::Reader(string n, int i) : Reader(n, i, 0) { 
    cout << "Delegating constructor" << endl; 
}

Reader::~Reader() {
    cout << "Destructor was called" << endl;
}

void Reader::getInfo() const{
    cout << "Reader: " << name << " | ID: " << id << " | Books: " << booksCount << endl;
}