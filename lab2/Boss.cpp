using namespace std;
#include "Boss.h"
#include <iostream>


Boss::Boss(string name, string headPosition) : Person(name), headPosition(headPosition) {}


void Boss::displayBossInfo() {
    cout << "Boss name: " << name << endl;
    cout << "Position: " << headPosition << endl;
}
