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

public:
    Book();                         
    Book(string t, string a, int y); 
    Book(string t, string a); 
    Book(const Book& other);
    Book(Book&& other);
    ~Book();

    void getInfo();

    static int getBookCount();
  

};


