#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    static int bookCount;
    int pages;

public:
    Book();                         
    Book(string t, string a, int y, int p); 
    Book(string t, string a); 
    Book(const Book& other);
    Book(Book&& other) noexcept;
    virtual ~Book();

    virtual void getInfo() const;
    virtual float getReadingTime() const;

    static int getBookCount() noexcept;
    Book operator+(const Book& other) const;
    Book operator!() const;
    Book& operator=(const Book& other);  
    Book& operator=(Book&& other) noexcept; 


    friend ostream& operator<<(ostream& out, const Book& b);
    friend istream& operator>>(istream& in, Book& b);
};


