//
//  Commercial.hpp
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#ifndef Commercial_hpp
#define Commercial_hpp

#include "Property.h"
#include <string>

using namespace std;

class Commercial : public Property {//commercial child to part Property class
private:
    bool taxes;
    double rate;
    
public:
    Commercial( bool rentalIn, double priceIn, int daysIn, bool taxesIn, double rateIn, string addressIn);//constructor
    //construts everything the same as the parent property class except it addes the taxes bool, and rate bool
    string toString();//returns a string that contains the details of the property
    double toTaxes();//returns the value calculated for the taxes
    int toDeadline(); //returns the deadline/ 
    ~Commercial();//deconstructor
};

#endif /* Commercial_hpp */
