#include "EBook.h"
#include <string>
using namespace std;

EBook& EBook::operator=(const EBook& other) {
    if (this != &other) {
        Book::operator=(other);
        format = other.format;
        website = other.website; 
    }
    return *this;
}

EBook& EBook::operator=(EBook&& other) noexcept {
    if (this != &other) {
        Book::operator=(move(other));
        format = move(other.format);
        website = move(other.website);
    }
    return *this;
}

EBook::EBook(const EBook& other) : Book(other),
    format(other.format),
    website(other.website)
{ cout << "EBook copied" << endl; }



EBook::EBook(EBook&& other) noexcept
    : Book(move(other)), 
    format(move(other.format)),
    website(move(other.website))
{
    cout << "EBook moved" << endl;
}


EBook::EBook() : Book(), format("Unknown"), website("Unknown") {
    cout << "Default EBook constructor" << endl;
}


EBook::EBook(string title, string author, int year,int pages, string format, string website)
    : Book(title, author, year, pages), 
    format(move(format)),
    website(move(website)) {
    cout << "EBook Overloaded constructor" << endl;
}


EBook::~EBook() {
    cout << "EBook destructor was called" << endl;
}

void EBook::getInfo() const {
Book::getInfo();
    cout << "Format: " <<format<< " | Website: " << website << endl;
}
