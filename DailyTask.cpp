#include "DailyTask.h"
DailyTask::DailyTask(string task, int hour, int min) : Text(task)
{
	this->hour = hour;
	this->min = min;
}

void DailyTask::Print()
{
	cout << "Time: " << hour << ":" << min << " " << task << endl;
}