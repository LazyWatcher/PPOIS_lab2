#include "CarPart.h"
#include <iostream>
using namespace std;





 CarPart::CarPart(string nameCarPart, string type,  double priceCarPart, int materialsNeeded)
	 : nameCarPart(nameCarPart), Material(type), priceCarPart(priceCarPart), materialsNeeded(materialsNeeded) {}

 string CarPart::getNameCarPart()  {
     return nameCarPart;
 }

 string CarPart::getType()  {
     return type;
 }

 double CarPart::getPriceCarPart()  {
     return priceCarPart;
 }

 int CarPart::getMaterialsNeeded()  {
     return materialsNeeded;
 }


 void CarPart::setNameCarPart(string newName) {
     nameCarPart = newName;
 }

 void CarPart::setType(string newType) {
     type = newType;
 }

 void CarPart::setPriceCarPart(double newPrice) {
     priceCarPart = newPrice;
 }

 void CarPart::setMaterialsNeeded(int newMaterialsNeeded) {
     materialsNeeded = newMaterialsNeeded;
 }

 void CarPart::displayCarPart() {
     cout << "Name: " << getNameCarPart() << endl;
     cout << "Material: " << getType() << endl;
     cout << "Prize: " << getPriceCarPart() << endl;
     cout << "Material needed: " << getMaterialsNeeded() << endl;
 }
