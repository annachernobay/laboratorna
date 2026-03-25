#pragma once
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

class UniversityLibrary : public Library {

private:
    string speсialty;
    int amountOfStudents;

public:
    UniversityLibrary();
    UniversityLibrary(string address,int amountOfBooks, string specialty, int amountOfStudents);
    UniversityLibrary(const UniversityLibrary& other);
    UniversityLibrary(UniversityLibrary&& other) noexcept;
    ~UniversityLibrary();
    UniversityLibrary& operator=(const UniversityLibrary& other);
    UniversityLibrary& operator=(UniversityLibrary&& other) noexcept;

    void getInfo() const;

};



