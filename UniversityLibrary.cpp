#include "UniversityLibrary.h"
#include <string>
#include "Interface.h"
using namespace std;

UniversityLibrary& UniversityLibrary::operator=(const UniversityLibrary& other) {
    if (this != &other) {
        Library::operator=(other);
        speсialty = other.speсialty;
        amountOfStudents = other.amountOfStudents;
    }
    return *this;
}

UniversityLibrary& UniversityLibrary::operator=(UniversityLibrary&& other) noexcept {
    if (this != &other) {
        Library::operator=(move(other));
        speсialty = move(other.speсialty);
        amountOfStudents = other.amountOfStudents;
        other.amountOfStudents = 0;
    }
    return *this;
}

UniversityLibrary::UniversityLibrary(const UniversityLibrary& other) : Library(other),
speсialty(other.speсialty),
    amountOfStudents(other.amountOfStudents)
{ cout << "UniversityLibrary copied" << endl; }



UniversityLibrary::UniversityLibrary(UniversityLibrary&& other) noexcept
    : Library(move(other)), 
    speсialty(move(other.speсialty)),
    amountOfStudents(move(other.amountOfStudents))
{
    other.amountOfStudents = 0;
    cout << "UniversityLibrary moved" << endl;
}


UniversityLibrary::UniversityLibrary() : Library(), speсialty("Unknown"), amountOfStudents(0) {
    cout << "Default UniversityLibrary constructor" << endl;
}


UniversityLibrary::UniversityLibrary(string address, int amountOfBooks, string specialty, int amountOfStudents)
    : Library(address, amountOfBooks), 
    speсialty(move(specialty)),
    amountOfStudents(amountOfStudents) {
    cout << "UniversityLibrary Overloaded constructor" << endl;
}


UniversityLibrary::~UniversityLibrary() {
    cout << "UniversityLibrary destructor was called" << endl;
}

void UniversityLibrary::getInfo() const {
Library::getInfo();
    cout << "Specialty: " <<speсialty<< " | Amount of students: " << amountOfStudents << endl;
}

void UniversityLibrary::showRules() const {
    cout << " University Library Rules: "<<endl;
    cout << " Open 8:00–22:00 " << endl;
    cout << " Student ID required " << endl;;
    cout << " Max 7 books at a time "<< endl;

}

void UniversityLibrary::open() const { 
    cout << "UniversiteLibrary is opened" <<endl;

}

void UniversityLibrary::getStatus() const {
    cout << "It is UniversityLibrary" << endl;
}