#pragma once
class Interface
{
public:
	virtual void open() const = 0;
	virtual void getStatus() const = 0;
	virtual ~Interface() {};
};

