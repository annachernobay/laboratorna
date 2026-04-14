#include "Book.h"
#include "Reader.h"
#include "Library.h"
#include "AudioBook.h"
#include "UniversityLibrary.h"
#include "ContactInfo.h"
#include "EBook.h"
#include "Interface.h"
#include <fstream>
#include <memory>
#include "MyException.h"

void history(const string& bookName, bool found) {
    unique_ptr<ofstream> p1 = make_unique<ofstream>("History.txt", ios::app);

    if (found) {
        *p1 << "Search: " << bookName << " | Result: Found" << endl;
}
    else
    {  *p1 << "Search: " << bookName << " | Result: Not found" << endl;
}


}
void findBook(const string& bookName)
{
    string line;
    unique_ptr<ifstream> file = make_unique<ifstream>("File.txt");
    bool found = false;
    while (getline(*file, line))
    {
        if (line.find(bookName) != string::npos) {
            found = true;
        }
    }
    if (found) {
        cout << "Book is here!" << endl;
    }
    else { cout << "Book is absent!" << endl; }
    file->close();

    history(bookName, found);
};

//void showOpen(Book& book)
//{
//    book.open();
//}
//
//void showStatus(Book& book) {
//    book.getStatus();
//}
/*
void showInfo(Book& book) {
    book.getInfo();
}
*/

/*void showInfo(Library& lib)
{
    lib.showRules();
}*/
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





     /*
     Book* pb1 = new AudioBook("Courts", "Author 1", 2009, 202, "a man", 3.2);
     pb1->getReadingTime();
     delete pb1;

     */

     /*AudioBook a("Courts", "Author 1", 2009, 202, "a man", 3.2);
     EBook e("Title", "Author 2", 2010, 100, "epub", "book.com");

     showInfo(a);
     showInfo(e);  */

     /*
         UniversityLibrary unlib1("Some address", 30000, "Programming", 2000);

         showInfo(unlib1);*/



         //AudioBook a("Courts", "Author 1", 2009, 202, "a man", 3.2);
         //EBook e("Title", "Author 2", 2010, 100, "epub", "book.com");

         //showOpen(a);
         //showOpen(e);
         //showStatus(a);
         //showStatus(e);
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
    int number;
    cout << "******************** " << "Enter 1 if you are an administrator" << " ******************** " << endl;
    cout << "************************ " << "Enter 2 if you are plain user" << " *********************** " << endl;
    cout << "*********************** " << "If you want to see user history enter 0" << " ***********************" << endl;
    try {

        cin >> number;

        if (number != 0 && number != 1 && number != 2) {
            throw MyException("You entered wrong number!");
        }
        if (number == 0) {
            ifstream file;
            string line;
            file.open("History.txt");
            if (!file.is_open()) {
                throw MyException("File is not opened!");
            }
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
        }
    }
    catch (const MyException& error) {
        cout << "Error: " << error.what() << endl;
    }


    if (number == 1) {
        try {
            string password;

            cout << "Enter password: " << endl;
            cin >> password;

            if (password != "123") {
                throw MyException("Wrong administrator password");
            }
        }
        catch (const MyException& error) {
            cout << "Access denied: " << error.what() << endl;
        }


        cout << "*******************" << "Administrator!" << "*******************" << endl;

        int adminModificator = 1000;
        while (true) {
            try {
                cout << "If you want to add a book to library enter 3" << endl;
                cout << "If you want to add info about reader enter 4" << endl;
                cout << "If you want to add info about library enter 5" << endl;
                cout << "If you want to exit enter 100" << endl;
                cin >> adminModificator;
                if (adminModificator == 3) {

                    ofstream file;
                    unique_ptr<Book> p1 = make_unique<Book>();
                    file.open("File.txt", ofstream::app);

                    if (!file.is_open()) {
                        throw MyException("File is not opened");
                    }


                    cout << "Enter info about new book: " << endl;
                    cin >> *p1;
                    file << *p1;
                    file.close();
                    cout << "Book successfully added!" << endl;

                }
                else if (adminModificator == 4) {

                    ofstream file;
                    unique_ptr<Reader> p1 = make_unique<Reader>();
                    file.open("File.txt", ofstream::app);

                    if (!file.is_open()) {
                        throw MyException("File is not opened");
                    }

                    cout << "Enter info about new reader: " << endl;
                    cin >> *p1;
                    file << *p1;
                    file.close();
                    cout << "Reader successfully added!" << endl;
                }
                else if (adminModificator == 5) {
                    ofstream file;
                    unique_ptr<Library> p1 = make_unique<Library>();
                    file.open("File.txt", ofstream::app);

                    if (!file.is_open()) {
                        throw MyException("File is not opened");
                    }
                    cout << "Enter info about new library: " << endl;
                    cin >> *p1;
                    file << *p1;
                    file.close();
                    cout << "Library successfully added!" << endl;

                }
                else if (adminModificator == 100)
                {
                    cout << "Exit!" << endl;
                    return 0;
                }
                else {
                    throw MyException("Unknown command");
                }

            }
            catch (const MyException& error) {
                cout << "Error: " << error.what() << endl;
            }
        }



        if (number == 2) {
            int userModificator = 1001;
            while (true) {
                try {
                cout << "*******************" << "User!" << "*******************" << endl;
                cout << "If you want to see read info that wrote administrator enter 6" << endl;
                cout << "If you want to find book enter 7" << endl;
                cout << "If you want to exit enter 100" << endl;
                cin >> userModificator;


                if (userModificator == 6) {
                    ifstream file;
                    string line;
                    file.open("File.txt");

                    if (!file.is_open()) {
                        throw MyException("File is not opened!");
                    }

                    while (getline(file, line))
                   
                            {
                                cout << line << endl;
                            }
                            file.close();
                        }
                    if (userModificator == 7)
                    {
                        string name;
                        cout << "Enter name of book: " << endl;
                        cin >> name;
                        findBook(name);
                    }
                    if (userModificator == 100) {
                        cout << "Exit!" << endl;
                        return 0;
                    }
                    else {
                        throw MyException("Unknown command");
                    }
                }
                catch(const MyException& error) { cout << "Error: " << error.what() << endl; }
            }
        }
    }

    return 0;
}