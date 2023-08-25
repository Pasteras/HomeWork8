#include <iostream>
#include "Text.h"
#include "GreatedTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"

using namespace std;

int main()
{
    Text genericTask("Simple Task");
    GreatedTask greatTask("Great Task!");
    DeadLineTask deadlineTask("Finish Report", 11, 3);
    DailyTask dailyTask("Exercise", 9, 26);

    Text* tasks[] = { &genericTask, &greatTask, &deadlineTask, &dailyTask };

    for (int i = 0; i < 4; i++)
    {
        tasks[i]->Print();
    }
}
