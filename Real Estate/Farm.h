//
//  Farm.hpp
//  Real Estate
//
//  Created by Apple Mac on 12/8/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#ifndef Farm_hpp
#define Farm_hpp

#include "Property.h"

#include <string>

using namespace std;

class Farm: public Property {
    
private:
    double rate;

public:
    Farm ( bool rentalIn, double priceIn, int daysIn, string addressIn);//constructor
    //only takes the variables it needs from the parent class.
    
    string toString();//returns a string that contains the details of the property
    double toTaxes();//returns the value calculated for the taxes
    int toDeadline(); //returns the deadline/ 
    ~Farm();
  
};

#endif /* Farm_hpp */
