#pragma once
#include "Text.h"
class DeadLineTask :
    public Text
{
private:
    int day;
    int month;
public:
    DeadLineTask(string task, int day, int month);
    void Print() override;
};

