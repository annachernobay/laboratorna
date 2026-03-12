#include "Book.h"
#include "Reader.h"
#include "Library.h"

int main() {
    Book b1("C++ Basics", "Author A", 2022);
    Book b2;

    Reader r1("Sasha", 108, 2);
    Reader r2("Kessy", 1, 9);
    Reader r3("Test", 7);

    Library l1("Main street", 5000);

    b1.getInfo();
    b2.getInfo();
    r1.getInfo();
    r2.getInfo();
    r3.getInfo();
    l1.getInfo();

    return 0;
}