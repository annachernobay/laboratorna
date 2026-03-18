#include "Book.h"

int Book::bookCount = 0;

Book::Book(const Book& other) {
    title = other.title;
    author = other.author;
    year = other.year;
    bookCount++;
    cout << "Book copied" << endl;
}


Book::Book(Book&& other) noexcept{
    title = move(other.title);
    author = move(other.author);
    year = other.year;
    bookCount++;           
    other.year = 0;        
    cout << "Book moved" << endl;
}


Book::Book()
    : Book("No title", "Unknown", 0) {
    cout << "Default constructor" << endl;
}


Book::Book(string t, string a, int y):title(t), author(a), year(y) {
    bookCount++;                     
    cout << "Overloaded constructor" << endl;
}


Book::Book(string t, string a)
    : Book(t, a, 0) {
    cout << "Delegating constructor" << endl;
}

Book::~Book() {
    bookCount--;
    cout << "Destructor was called" << endl;
}

void Book::getInfo() const{
    cout << "Book: " << title << " | Author: " << author << " | Year: " << year << endl;
}

int Book::getBookCount() {
    return bookCount;
}

Book Book::operator+ (const Book& other) const {
    return Book(title + " & " + other.title, author, year);
}

Book Book::operator!() const {
    return Book(title, author, year + 1);
}

ostream& operator<<(ostream& out, const Book& b) {
    out << b.title << " | " << b.author << " | " << b.year;
    return out;
}

istream& operator>>(istream& in, Book& b) {
    in >> b.title >> b.author >> b.year;
    return in;
}