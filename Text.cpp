#include "Text.h"

Text::Text(string task)
{
	this->task = task;
}

void Text::Print()
{
	cout << task << endl;
}