#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book();                         
    Book(string t, string a, int y); 
    Book(string t, string a);        
    ~Book();
    void getInfo();
};


