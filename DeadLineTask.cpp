#include "DeadLineTask.h"

DeadLineTask::DeadLineTask(string task, int day, int month) : Text(task)
{
	this->day = day;
	this->month = month;
}

void DeadLineTask::Print()
{
	cout << "Date: " << day << "." << month << " " << task << endl;
}