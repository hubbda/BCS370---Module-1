//
//  blackListedCustomers.hpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#ifndef blackListedCustomers_hpp
#define blackListedCustomers_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Black_Listed {
private:
    string blackListDate;
    
public:
    Black_Listed();
    
    void setDate(string d);
    
    string getDate();
    
    void printCustomerInfo();
};

#endif /* blackListedCustomers_hpp */
