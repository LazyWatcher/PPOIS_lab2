#include "Factory.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>


Factory::Factory(string nameFactory, vector<Order> orders, vector<ProductionProcess> processes, Schedule schedule, Staff staff) : nameFactory(nameFactory), orders(orders),
processes(processes) , schedule(schedule), staff(staff) {}

void Factory::addOrder( Order newOrder) {
    orders.push_back(newOrder);
}

void Factory::addProductionProcess( ProductionProcess newProcess) {
    processes.push_back(newProcess);
}

void Factory::setSchedule( Schedule newSchedule) {
    schedule = newSchedule;
}

Schedule Factory::getSchedule()  {
    return schedule;
}

void Factory::setStaff(Staff newStaff) {
    staff = newStaff;
}

Staff Factory::getStaff() {
    return staff;
}

