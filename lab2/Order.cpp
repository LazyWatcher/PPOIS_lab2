#include "Order.h"
#include <iostream>
#include <string>
using namespace std;



Order::Order(Client client, Staff staff, int orderNumber, double value, string details) : client(client), staff(staff), orderNumber(orderNumber), value(value), details(details) {}


void Order::displayOrderInfo(Client client, Staff staff) {
    client.displayClientInfo();
    cout << "Order Number: " << orderNumber << endl;
    cout << "Details: " << details << endl;
    cout << "Value: " << value << endl;
    cout << "Work staff: " << endl;
    staff.displayStaffInfo();
}


void Order::setDetails(string det) {
    details = det;
}

void Order::setOrderNumber(int newOrderNumber) {
    orderNumber = newOrderNumber;
}



void Order::setValue(double newValue) {
    value = newValue;
}

void Order::setClient(Client newClient) {
    client = newClient;
}

void Order::setStaff(Staff newStaff) {
    staff = newStaff;
}