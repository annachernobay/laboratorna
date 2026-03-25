#pragma once
#include <iostream>
#include <string>
#include "ContactInfo.h"
using namespace std;

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
    ~Reader();
    void getInfo() const;
};