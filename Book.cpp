#include "Book.h"

Book::Book(string t, string a, int y) : title(t), author(a), year(y) {
    cout << "Constructor created" << endl;
}

Book::~Book() {
    cout << "Destructor created" << endl;
}

void Book::getInfo() {
    cout << "Book: " << title << " | Author: " << author << " | Year: " << year << endl;
}