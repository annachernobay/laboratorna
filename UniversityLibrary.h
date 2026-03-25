#pragma once
#include <iostream>
#include <string>
#include "Library.h"
using namespace std;

class UniversityLibrary : public Library {

private:
    string speсialty;
    float duration;

public:
    UniversityLibrary();
    UniversityLibrary(string title, string author, int year, string whoReads, float duration);
    UniversityLibrary(const UniversityLibrary& other);
    UniversityLibrary(UniversityLibrary&& other) noexcept;
    ~UniversityLibrary();
    UniversityLibrary& operator=(const UniversityLibrary& other);
    UniversityLibrary& operator=(UniversityLibrary&& other) noexcept;

    void getInfo() const;

};



