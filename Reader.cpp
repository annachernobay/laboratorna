#include "ContactInfo.h"
#include "Reader.h"
#include "Interface.h"

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

Reader::Reader(string n, int i, int c, const ContactInfo& contactInfo)
    : name(n), id(i), booksCount(c), contact(contactInfo)
{
    cout << "Overloaded constructor in Reader about child class ContactInfo" << endl;
}

Reader::~Reader() {
    cout << "Destructor was called" << endl;
}

void Reader::getInfo() const{
    cout << "Reader: " << name << " | ID: " << id << " | Books: " << booksCount << endl;
}

ostream& operator<<(ostream& out, const Reader& r) {
    cout << "Reader ostream operator << was called" << endl;
    out << "Reader: " << r.name << " | " << "ID: " << r.id << " | " << "Books: " << r.booksCount << " | "<< endl;
    return out;
}

istream& operator>>(istream& in, Reader& r) {
    cout << "Reader istream operator >> was called" << endl;
    cout << "Enter name: ";
    getline(in >> ws, r.name);
    cout << "Enter ID: ";
    in >> r.id;
    cout << "Enter number of books: ";
    in >> r.booksCount;

    return in;
}