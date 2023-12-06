#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Worker.h"
using namespace std;
#include "Boss.h"



class Staff {
protected:

    Boss boss;
    vector<Worker> workers;

public:

    Staff(Boss boss, vector<Worker> workers);


    void displayStaffInfo();

    void addWorker(Worker newWorker);
};