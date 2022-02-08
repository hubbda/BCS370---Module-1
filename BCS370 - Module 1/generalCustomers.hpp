//
//  generalCustomers.hpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#ifndef generalCustomers_hpp
#define generalCustomers_hpp

#include "preferredCustomers.hpp"
#include "blackListedCustomers.hpp"

#include <stdio.h>
#include <string>

using namespace std;

class Customer : public Preferred, public Black_Listed {
private:
    int customerID;
    string name;
    string address;
    Preferred tier;
    Black_Listed bl;
    
    
public:
    Customer();
    
    int getID();
    string getName();
    string getAddress();
    Preferred getTier();
    Black_Listed getBL();
    
    void registerCustomer(int id, string n, string a, string t, string b);
    
    void printCustomerInfo();
};

#endif /* generalCustomers_hpp */
