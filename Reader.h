#pragma once
#include <iostream>
#include <string>
using namespace std;

class Reader {
private:
    string name;
    int id;
    int booksCount;

public:
    Reader();
    Reader(string n, int i, int c);
    Reader(string n, int i);
    ~Reader();
    void getInfo();
};