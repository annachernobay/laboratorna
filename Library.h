#pragma once
#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string address;
    int amountOfBooks;

public:
    Library();
    Library(string address, int amountOfBooks = 50);
    Library(string address);
    ~Library();
    void getInfo();
};