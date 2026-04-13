#include "MyException.h"
#include <string>
#include <iostream>
#include <exception>
using namespace std;
MyException::MyException():message("Unknown") {cout<< "MyException default constructor" << endl;
}

MyException::MyException(const string& msg) :message(msg)
{
	cout << "MyException overloaded constructor" << endl;
}
const char* MyException::what() const noexcept
{
	return message.c_str();
}

