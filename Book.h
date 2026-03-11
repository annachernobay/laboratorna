#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
    private:
        string title;
        string author;
        int year;

    public:
        Book(string t = "Untitled", string a = "Unknown", int y = 2026);
        ~Book();
        void getInfo();

};


