#include "Reader.h"

Reader::Reader(string n, int i, int c) : name(n), id(i), booksCount(c) {
    cout << "Constructor created" << endl;
}

Reader::Reader(string n, int i) : Reader(n, i, 0) {}

Reader::~Reader() {
    cout << "Destructor created" << endl;
}

void Reader::getInfo() {
    cout << "Reader: " << name << " | ID: " << id << " | Books: " << booksCount << endl;
}