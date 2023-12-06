#pragma once
using namespace std;
#include <iostream>
#include <string>
#include "Material.h"


class CarPart : public Material {
protected:
    string nameCarPart;
    double priceCarPart;
    int materialsNeeded;

public:
    CarPart(string nameCarPart, string type, double priceCarPart, int materialsNeeded);


    string getNameCarPart();

    string getType();
    

    double getPriceCarPart();

    int getMaterialsNeeded();


    void setNameCarPart(string newName);

    void setType(string newType);

    void setPriceCarPart(double newPrice);

    void setMaterialsNeeded(int newMaterialsNeeded);

    void displayCarPart();
};
