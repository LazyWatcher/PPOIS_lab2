#pragma once
#include <string>
#include "Person.h"
using namespace std;



class Worker : public Person {
protected:
	string specilization;
	int workerID;
    double salary;

    Worker(string name, string surname, long int workerID, double salary);

public:
    Worker(string name, string surname, string date, string specilization, long int workerID, double salary);
   
    long int getWorkerID();

    string getSpecilization();

    double getSalary();

    void displayWorkerInfo();

};
