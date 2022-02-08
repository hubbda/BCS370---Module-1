//
//  blackListedCustomers.cpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#include "blackListedCustomers.hpp"

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

Black_Listed::Black_Listed() {
    blackListDate = "n/a";
}

void Black_Listed::setDate(string d) {
    if (d == "") {
        blackListDate = "no";
    } else {
        blackListDate = d;
    }
}

string Black_Listed::getDate() {
    return blackListDate;
}

void Black_Listed::printCustomerInfo() {
    cout << "\nCustomer black-listed = " << blackListDate << endl;
}
