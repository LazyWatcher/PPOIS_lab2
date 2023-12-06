#include "Worker.h"
#include <string>
#include <iostream>
using namespace std;



Worker::Worker(string name, string surname, long int workerID, double salary) : Person(name, surname), workerID(workerID), salary(salary) {}


Worker::Worker(string name, string surname, string date, string specilization, long int workerID, double salary) : Person(name, surname, date),
specilization(specilization), workerID(workerID), salary(salary) {}


long int Worker::getWorkerID() {
    return workerID;
}


string Worker::getSpecilization() {
    return specilization;
}
double Worker::getSalary() {
    return salary;
}

void Worker::displayWorkerInfo() {

    cout << "Name: " << getName() << endl;
    cout << "Surname: " << getSurname() << endl;
    cout << "Specilization: " << specilization << endl;
    cout << "ID: " << workerID << endl;
    cout << "Salary: " << salary << endl;
}