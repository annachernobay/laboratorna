#include "Book.h"
#include "Reader.h"
#include "Library.h"

int main() {
    Book b1("C++ Basics", "Author A", 2000);
    Book b2("Harry Potter", "Rowling", 2000);
    Book b3 = b1;
    Book b4 = move(b2);
    const Book b5("Some title", "Some author", 1999);
    b5.getInfo();
    Book b8("Math", "Ister", 900);

    Book b6 = b1 + b8;
    Book b7 = !b1;

    cout << "Book b6: "<< b6 << endl;
    cout << "Book b7: "<< b7 << endl;
    cout << "Books created: " << Book::getBookCount() << endl;

    Reader r1("Sasha", 108, 2);
    Reader r2("Kessy", 1, 9);
    Reader r3("Test", 7);

    Library l1("Main street", 5000);

    b1.getInfo();
    r1.getInfo();
    r2.getInfo();
    r3.getInfo();
    l1.getInfo();

    cout << "Enter title";

    return 0;
}