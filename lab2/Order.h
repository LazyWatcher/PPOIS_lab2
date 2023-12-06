#pragma once
using namespace std; 
#include <string>
#include "Client.h"
#include "Staff.h"





class Order   {
protected:
    int orderNumber;
    string details;
    double value;
    Client client;
    Staff staff;

public:
    Order(Client client, Staff staff, int orderNumber, double value, string details);

    void displayOrderInfo(Client client, Staff staff);

    void setDetails(string det);

    void setOrderNumber(int newOrderNumber);

   

    void setValue(double newValue);

    void setClient( Client newClient);

    void setStaff(Staff newStaff);
    

};
