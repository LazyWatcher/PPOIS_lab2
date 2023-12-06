#include "Schedule.h"
using namespace std;

Schedule::Schedule(string date, string shift, vector<string> tasks) : date(date), shift(shift), tasks(tasks) {}


string Schedule::getDate() {
    return date;
}

string Schedule::getShift() {
    return shift;
}

vector<string> Schedule::getTasks() {
    return tasks;
}

void Schedule::addTask(string newTask) {
    tasks.push_back(newTask);
}

void Schedule::displaySchedule() {
    std::cout << "Date: " << date << std::endl;
    std::cout << "Shift: " << shift << std::endl;
    std::cout << "Tasks:" << std::endl;
    for (auto& task : tasks) {
        std::cout << "- " << task << std::endl;
    }
}