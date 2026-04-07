#pragma once
#include "Interface.h"
#include <string>
#include <iostream>
using namespace std;

class ContactInfo final: public Interface{
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

    void getInfo() const;
    void open() const override;
    void getStatus() const override;
};