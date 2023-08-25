#pragma once
#include "Text.h"
class DailyTask :
    public Text
{
private:
    int hour;
    int min;
public:
    DailyTask(string task, int hour, int min);
    
    void Print() override;
};

