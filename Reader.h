#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "ContactInfo.h"

class Reader {
private:
    string name;
    int id;
    int booksCount;
    ContactInfo contact;

public:
    Reader();
    Reader(string n, int i, int c);
    Reader(string n, int i);
    Reader(string n, int i, int c, const ContactInfo& contactInfo);
    virtual ~Reader();
    void getInfo() const;


    friend ostream& operator<<(ostream& out, const Reader& r);
    friend istream& operator>>(istream& in, Reader& r);
};