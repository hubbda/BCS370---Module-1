//
//  preferredCustomers.hpp
//  BCS370 - Module 1
//
//  Created by Devon Hubbard on 2/7/22.
//

#ifndef preferredCustomers_hpp
#define preferredCustomers_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Preferred {
private:
    string preferredTiers;
    
public:
    Preferred();
    
    void setTier(string t);
    
    string getTier();
    
    void printCustomerInfo();
};

#endif /* preferredCustomers_hpp */
