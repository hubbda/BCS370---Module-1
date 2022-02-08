//
//  main.cpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//
#include "generalCustomers.hpp"
#include "preferredCustomers.hpp"
#include "blackListedCustomers.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int custID;
    string custName;
    string custAddress;
    string custTier;
    char type;
    string custBLD;
    
    cout << "Enter Customer Id: " << endl;
    cin >> custID;
    
    cout << "Enter Customer name: " << endl;
    cin >> custName;
    
    cout << "Enter Customer address: " << endl;
    cin >> custAddress;
    
    do {
        cout << "Is customer black-listed? [y/n]: " << endl;
        cin >> type;
    }
    while( !cin.fail() && type!='y' && type!='n' );
    
    if(type == 'y') {
        cout << "Enter black-listed date: " << endl;
        cin >> custBLD;
    } else if (type == 'n') {
        cout << "Enter customer tier: " << endl;
        cin >> custTier;
    }
    
    Customer one;
    one.registerCustomer(custID, custName, custAddress, custTier, custBLD);
    one.printCustomerInfo();
}
