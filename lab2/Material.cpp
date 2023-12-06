using namespace std;
#include <string>
#include "Material.h"
#include <iostream>

Material::Material(string type, double quantity) : type(type), quantity(quantity) {}
Material::Material(string type) : type(type) {}


double Material::getQuantity() {
    return quantity;
}

string Material::getType()  { return type; }


void Material::consume(double amount) {
    if (amount <= quantity) {
        quantity -= amount;
    }
    else {
        throw "Òot enough raw materials!";
    }
}