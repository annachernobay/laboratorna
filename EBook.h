#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Book.h"
#include "Interface.h"

class EBook : public Book {
private: 
	string format;
	string website;
public: 
    EBook();
    EBook(string title, string author, int year, int pages, string format, string website);
    EBook(const EBook& other);
    EBook(EBook&& other) noexcept;
    ~EBook() override;
    EBook& operator=(const EBook& other);
    EBook& operator=(EBook&& other) noexcept;

    void getInfo() const override;
    void open() const override;
    void getStatus() const override;

};

