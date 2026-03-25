#include "AudioBook.h"
#include <string>
using namespace std;


AudioBook& AudioBook::operator=(const AudioBook& other) {
    if (this != &other) {
        Book::operator=(other);
        whoReads = other.whoReads;
        duration = other.duration;
    }
    return *this;
}

AudioBook& AudioBook::operator=(AudioBook&& other) noexcept {
    if (this != &other) {
        Book::operator=(move(other));
        whoReads = move(other.whoReads);
        duration = other.duration;
        other.duration = 0;
    }
    return *this;
}

AudioBook::AudioBook(const AudioBook& other) : Book(other),
    whoReads(other.whoReads),
    duration(other.duration)
{ cout << "AudioBook copied" << endl; }



AudioBook::AudioBook(AudioBook&& other) noexcept 
    : Book(move(other)), 
    whoReads(move(other.whoReads)),
    duration(move(other.duration))
{
    other.duration = 0;
    cout << "AudioBook moved" << endl;
}


AudioBook::AudioBook() : Book(), whoReads("Unknown"), duration(0) {
    cout << "Default AudioBook constructor" << endl;
}


AudioBook::AudioBook(string title, string author, int year, string whoReads, float duration) 
    : Book(title, author, year), 
    whoReads(move(whoReads)),
    duration(duration) {
    cout << "Overloaded constructor" << endl;
}


AudioBook::~AudioBook() {
    cout << "AudioBook destructor was called" << endl;
}

void AudioBook::getInfo() const {
Book::getInfo();
    cout << "Who reads: " <<whoReads<< " | Duration: " << duration << " hours " << endl;
}

