#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Client : public Person {
protected:
    string address;
    string email;
    int phoneNumber;
    Client(string name, string addr);
public:
    
    Client(string name, string addr, string email, int phone);

    
    void displayClientInfo();

    
    void updateClientInfo(string email, int phone);
};
