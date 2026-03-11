#include "Book.h"

Book::Book()
    : Book("No title", "Unknown", 0) {
    cout << "Default constructor" << endl;
}

Book::Book(string t, string a, int y)
    : title(t), author(a), year(y) {
    cout << "Overloaded constructor" << endl;
}

Book::Book(string t, string a)
    : Book(t, a, 0) {
    cout << "Delegating constructor" << endl;
}

Book::~Book() {
    cout << "Destructor was called" << endl;
}

void Book::getInfo() {
    cout << "Book: " << title << " | Author: " << author << " | Year: " << year << endl;
}