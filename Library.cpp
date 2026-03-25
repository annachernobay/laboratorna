#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

Library::Library()
    : address("Default St."), amountOfBooks(100) {
    cout << "Default constructor" << endl;
}

Library::Library(string address, int amountOfBooks)
    : address(address), amountOfBooks(amountOfBooks) {
    cout << "Overloaded constructor" << endl;
}

Library::Library(string address)
    : Library(address, 50) {
    cout << "Delegating constructor" << endl;
}

Library::~Library() {
    cout << "Destructor was called" << endl;
}

 void Library::getInfo() const {
        cout << "Library: " << address << " | Amount of books: " << amountOfBooks << endl;}

