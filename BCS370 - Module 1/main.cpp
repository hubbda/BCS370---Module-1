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
    
    cout << "Enter Customer Id: ";
    cin >> custID;
    
    cout << "\nEnter Customer name: ";
    cin >> custName;
    
    cout << "\nEnter Customer address: ";
    cin >> custAddress;
    
    do {
        cout << "\nIs customer black-listed? [y/n]: ";
        cin >> type;
    }
    while( !cin.fail() && type!='y' && type!='n' );
    
    if(type == 'y') {
        cout << "\nEnter black-listed date: ";
        cin >> custBLD;
    } else if (type == 'n') {
        cout << "\nEnter customer tier: ";
        cin >> custTier;
    }
    
    Customer one(custID, custName, custAddress, custTier, custBLD);
    one.printCustomerInfo();
    
}
