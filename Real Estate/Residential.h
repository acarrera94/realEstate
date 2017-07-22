//
//  Residential.hpp
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#ifndef Residential_hpp
#define Residential_hpp

#include "Property.h"
#include <string>

using namespace std;

class Residential : public Property {//to make it a child of Property
    
protected:

    bool occupied;
    double priceRate;
    
public:
    Residential( bool rentalIn, double priceIn, int daysIn, bool occupiedIn, string addressIn);//constructor
    //sets everything the same as the property parent class except for the occupied bool
    
    string toString();//displays all the properties of the residential object.
    //inhereted from property classs
    double toTaxes();
    //calculates and returns the tax rate for the redential class.
    int toDeadline(); //returns the deadline/ 
    ~Residential ();//deconstructor. 
};

#endif /* Residential_hpp */
