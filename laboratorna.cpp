#include "Book.h"
#include "Reader.h"
#include "Library.h"
#include "AudioBook.h"
#include "UniversityLibrary.h"
#include "ContactInfo.h"

int main() {
  /* Book b1("C++ Basics", "Author A", 2000, 200);
   b1.getReadingTime();
  
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
    */  





    /*
    
    Book b1;
    AudioBook a2("Fairytales", "Author 0", 2001, 203, "A woman", 2);

    Book* pb = &a2;
    pb->getInfo();

   */
    
    Book* pb1 = new AudioBook("Courts", "Author 1", 2009, 202, "a man", 3.2);
    pb1->getReadingTime();
    delete pb1;


    
    




    /* 
    AudioBook a2 = a1;
    AudioBook a3 = move(a1);
    

    UniversityLibrary unlib1("Some address", 30000, "Programming", 2000);
    unlib1.getInfo();
    UniversityLibrary unlib2 = unlib1;
    UniversityLibrary unlib3 = move(unlib1);


    ContactInfo info1("123456789", "user@gmail.com");
    Reader r4("Alex", 108, 2, info1);
    
    r4.getInfo();

    
    b1.getInfo();
    r1.getInfo();
    r2.getInfo();
    r3.getInfo();
    l1.getInfo();

    */
    return 0;
}