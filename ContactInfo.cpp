#include "ContactInfo.h"
#include <iostream>
using namespace std;

ContactInfo::ContactInfo()
    : phone("Unknown"), email("Unknown")
{
    cout << "Default ContactInfo constructor" << endl;
}

ContactInfo::ContactInfo(string phone, string email)
    : phone(phone), email(email)
{
    cout << "Overloaded ContactInfo constructor" << endl;
}

ContactInfo::ContactInfo(const ContactInfo& other)
    : phone(other.phone), email(other.email)
{
    cout << "ContactInfo copied" << endl;
}

ContactInfo::ContactInfo(ContactInfo&& other) noexcept
    : phone(move(other.phone)), email(move(other.email))
{
    cout << "ContactInfo moved" << endl;
}

ContactInfo& ContactInfo::operator=(const ContactInfo& other) {
    if (this != &other) {
        phone = other.phone;
        email = other.email;
    }
    return *this;
}

ContactInfo& ContactInfo::operator=(ContactInfo&& other) noexcept {
    if (this != &other) {
        phone = move(other.phone);
        email = move(other.email);
    }
    return *this;
}

ContactInfo::~ContactInfo() {
    cout << "ContactInfo destructor was called" << endl;
}

void ContactInfo::getInfo() const {
    cout << "Phone: " << phone
        << " | Email: " << email << endl;
}