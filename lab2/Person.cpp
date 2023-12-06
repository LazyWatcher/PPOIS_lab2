#include "Person.h"
#include <string>
using namespace std;



Person::Person(string name, string surname) : name(name), surname(surname) {}

Person::Person(string name) : name(name) {}

Person::Person(string name,  string surname, string date) : name(name), surname(surname), date(date) {}



string Person::getName() {
    return name;
}

string Person::getSurname() {
    return surname;
}
string Person::getDate() {
    return date;
}

void Person::setName(string newName) {
    name = newName;
}

void Person::setSurname(string newSurname) {
    surname = newSurname;
}

void Person::setDate(string newDate) {
    date = newDate;
}


