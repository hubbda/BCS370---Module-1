//
//  generalCustomers.cpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#include "generalCustomers.hpp"
#include "preferredCustomers.hpp"
#include "blackListedCustomers.hpp"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

Customer::Customer() : Preferred(), Black_Listed() {
    customerID = 0;
    name = "n/a";
    address = "n/a";
}
    
Customer::Customer(int id, string n, string a, string t, string b) {
    customerID = id;
    name = n;
    address = a;
    setTier(t);
    setDate(b);
}
    
int Customer::getID() {
    return customerID;
}
string Customer::getName() {
    return name;
}
string Customer::getAddress() {
    return address;
}
    
void Customer::printCustomerInfo() {
    cout << "Customer ID = " << customerID << endl;
    cout << "Customer name = " << name << endl;
    cout << "Customer address = " << address << endl;
    Preferred::printCustomerInfo();
    Black_Listed::printCustomerInfo();
}
