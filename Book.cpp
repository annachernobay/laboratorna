#include "Book.h"

int Book::bookCount = 0;

Book& Book::operator=(const Book& other) {
    if (this != &other) {
        title = other.title;
        author = other.author;
        year = other.year;
        pages = other.pages;
    }
    return *this;
}

Book& Book::operator=(Book&& other) noexcept {
    if (this != &other) {
        title = std::move(other.title);
        author = std::move(other.author);
        year = other.year;
        other.year = 0;
        pages = other.pages;
        other.pages = 0;
    }
    return *this;
}

Book::Book(const Book& other) {
    title = other.title;
    author = other.author;
    year = other.year;
    pages = other.pages;
    bookCount++;
    cout << "Book copied" << endl;
}


Book::Book(Book&& other) noexcept{
    title = move(other.title);
    author = move(other.author);
    year = other.year;
    pages = other.pages;
    bookCount++;           
    other.year = 0;   
    other.pages = 0;

    cout << "Book moved" << endl;
}


Book::Book()
    : Book("No title", "Unknown", 0, 0) {
    cout << "Default constructor" << endl;
}


Book::Book(string t, string a, int y, int p):title(t), author(a), year(y), pages(p) {
    bookCount++;                     
    cout << "Overloaded constructor" << endl;
}


Book::Book(string t, string a)
    : Book(t, a, 0, 0) {
    cout << "Delegating constructor" << endl;
}

Book::~Book() {
    bookCount--;
    cout << "Destructor was called" << endl;
}


void Book::getInfo() const{
    cout << "Book: " << title << " | Author: " << author << " | Year: " << year << endl;
}

float Book::getReadingTime() const{
    float temp = pages * 2.5;
    cout << "Reading time : " << temp << endl;
    return temp;
}

int Book::getBookCount() noexcept{
    return bookCount;
}

Book Book::operator+ (const Book& other) const {
    cout << "Overloaded operator + was called" << endl;

    return Book(title + " + " + other.title,
        author + " + " + other.author,
        min(year, other.year),
        min(pages, other.pages));

}

Book Book::operator!() const {
    cout << "Overloaded operator ! was called" << endl;
    return Book(title, author, year + 1, pages + 1);
}

ostream& operator<<(ostream& out, const Book& b) {
    cout << "Ostream operator << was called" << endl;
    out << b.title << " | " << b.author << " | " << b.year << b.pages << " | ";
    return out;
}

istream& operator>>(istream& in, Book& b) {
    cout << "Istream operator >> was called" << endl;
    cout << "Enter title: ";
    getline(in, b.title);
    cout << "Enter author: ";
    getline(in, b.author);
    cout << "Enter year: ";
    in >> b.year;
    cout << "Enter pages: ";
    in >> b.pages;

    return in;
}

