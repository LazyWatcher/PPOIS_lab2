#pragma once
using namespace std;
#include <string>
#include <iostream>

class Material {
protected:
    string type;
    double quantity;
    Material(string type);
public:

    Material(string type, double quantity);
    double getQuantity();

    string getType();

    void consume(double amount);
}; 