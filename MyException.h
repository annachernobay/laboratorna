#pragma once
#include <string>
#include<exception>
using namespace std;

class MyException : public exception
{
private:
	string message;
public: 
	MyException();
	MyException(const string& msg);
	const char* what() const noexcept override;
};

