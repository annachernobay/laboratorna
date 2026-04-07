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
    ~Library();
    void getInfo() const;
    virtual void showRules() const = 0;
    void open() const override;
    void getStatus() const override;
};