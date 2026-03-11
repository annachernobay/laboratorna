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
    Reader(string n = "Anonim", int i = 0, int c = 0);
    Reader(string n, int i);
    ~Reader();
    void getInfo();
};