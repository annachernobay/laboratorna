#pragma once
#include <string>
#include <iostream>
using namespace std;

class ContactInfo {
private:
    string phone;
    string email;

public:
    ContactInfo();
    ContactInfo(string phone, string email);
    ContactInfo(const ContactInfo& other);
    ContactInfo(ContactInfo&& other) noexcept;
    ~ContactInfo();

    ContactInfo& operator=(const ContactInfo& other);
    ContactInfo& operator=(ContactInfo&& other) noexcept;

    void getInfo() const;   // <-- важливо: це має співпадати з cpp
};