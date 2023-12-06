#pragma once
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include "Order.h"
#include "ProductionProcess.h"
#include "Schedule.h"
#include "Staff.h"

class Factory{

protected:
    string nameFactory;
    vector<Order> orders;
    vector<ProductionProcess> processes;
    Schedule schedule;
    Staff staff;

public:

    Factory(string nameFactory, vector<Order> orders, vector<ProductionProcess> processes, Schedule schedule, Staff staff);
    

    void addOrder(Order newOrder);

    void addProductionProcess(ProductionProcess newProcess);

    void setSchedule(Schedule newSchedule);

    Schedule getSchedule();

    void setStaff(Staff newStaff);

    Staff getStaff();
};
