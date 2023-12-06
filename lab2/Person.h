#pragma once
#include <string>
using namespace std;


class Person {
protected:
   string name;
   string surname;
   string date;

   Person(string name, string surname);
   Person(string name);

public:
    Person(string name, string surname,  string date);

    string getName();

    string getSurname();

    string getDate();

    void setName(string newName);

    void setSurname(string newSurname);

    void setDate(string newDate);

};

