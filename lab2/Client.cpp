using namespace std;
#include "Client.h"
#include <string>
#include <iostream>

Client::Client(string name, string addr) : Person(name), address(addr) {}

Client::Client(string name, string addr, string email, int phone) : Person(name), address(addr), email(email), phoneNumber(phone) {}

void Client::displayClientInfo() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Email" << email << endl;
    cout << "Phone number: " << phoneNumber << endl;
}

void Client::updateClientInfo(string Email, int phone) {
    email = Email;
    phoneNumber = phone;
}