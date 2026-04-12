#pragma once
#include <iostream>
#include <string>
#include "Interface.h"
using namespace std;

class Library: public Interface {
private:
    string address;
    int amountOfBooks;

public:
    Library();
    Library(string address, int amountOfBooks);
    Library(string address);
    virtual ~Library();
    virtual void getInfo() const;
    //virtual void showRules() const = 0;
    void open() const override;
    void getStatus() const override;

    friend ostream& operator<<(ostream& out, const Library& l);
    friend istream& operator>>(istream& in, Library& l);
};