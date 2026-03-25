#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class AudioBook : public Book {

    private:
        string whoReads;
        float duration;

    public:
        AudioBook();
        AudioBook(string title, string author, int year, string whoReads, float duration);
        AudioBook(const AudioBook& other);
        AudioBook(AudioBook&& other) noexcept;
        ~AudioBook();
        AudioBook& operator=(const AudioBook& other);
        AudioBook& operator=(AudioBook&& other) noexcept;

        void getInfo() const;
  
};

