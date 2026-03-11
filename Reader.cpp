#include "Reader.h"

Reader::Reader()
    : name("Kessy"), booksCount(100) {
    cout << "Default constructor" << endl;
}
Reader::Reader(string n, int i, int c) : name(n), id(i), booksCount(c) {
    cout << "Overloaded constructor" << endl;
}

Reader::Reader(string n, int i) : Reader(n, i, 0) { 
    cout << "Delegating constructor" << endl; 
}

Reader::~Reader() {
    cout << "Destructor created" << endl;
}

void Reader::getInfo() {
    cout << "Reader: " << name << " | ID: " << id << " | Books: " << booksCount << endl;
}