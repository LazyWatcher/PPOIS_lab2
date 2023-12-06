#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Person.h"


class Boss : public Person {
protected:
   
    string headPosition;

public:
    Boss(string name, string headPosition);

    void displayBossInfo();
};

