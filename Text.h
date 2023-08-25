#pragma once
#include <iostream>
using namespace std;

class Text
{
protected:
	string task;
public:
	Text(string);

	virtual void Print();
};

