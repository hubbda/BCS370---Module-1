//
//  preferredCustomers.cpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#include "preferredCustomers.hpp"
#include "generalCustomers.hpp"

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

Preferred::Preferred() {
    preferredTiers = "n/a";
}

void Preferred::setTier(string t) {
    preferredTiers = t;
}

string Preferred::getTier() {
    return preferredTiers;
}

void Preferred::printCustomerInfo() {
    cout << "\nCustomer tier lvl = " << preferredTiers << endl;
}

