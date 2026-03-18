#include "Book.h"

int Book::bookCount = 0;

Book::Book(string t, string a, int y) 
{
    this->title = t;
    this->author = a;
    this->year = y;
    bookCount++;
    cout << "Book object created" << endl;
}

Book::Book(const Book& other) {
    title = other.title;
    author = other.author;
    year = other.year;
    bookCount++;
    cout << "Book copied" << endl;
}

Book::Book(Book&& other) {
    title = move(other.title);
    author = move(other.author);
    year = other.year;
    cout << "Book moved" << endl;
}

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

int Book::getBookCount() {
    return bookCount;
}