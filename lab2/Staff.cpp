#include "Staff.h"
#include <string>





Staff::Staff(Boss boss, vector<Worker> workers) : boss(boss), workers(workers) {}


void Staff::displayStaffInfo() {
    boss.displayBossInfo();
    for (auto& worker : workers) {
        worker.displayWorkerInfo();
    }
}


void Staff::addWorker(Worker newWorker) {
    workers.push_back(newWorker);
}




