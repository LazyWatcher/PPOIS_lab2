#pragma once
using namespace std;
#include <string>
#include <vector>
#include <iostream>

class Schedule {
private:
    string date;
    string shift;  // Смена
    vector<string> tasks; 

public:
    Schedule(string date, string shift, vector<string> tasks);
   
    string getDate();

    string getShift();

    vector<string> getTasks();

    void addTask(string newTask);

    void displaySchedule();
};
