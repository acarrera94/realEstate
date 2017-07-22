//
//  Farm.cpp
//  Real Estate
//
//  Created by Apple Mac on 12/8/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#include "Farm.h"
using namespace std;

Farm::Farm( bool rentalIn, double priceIn, int daysIn, string addressIn)
:Property(  rentalIn,  priceIn,  daysIn, addressIn)
{
    rate = 0.4;//sets rate equal to 40% for farms
}

string Farm::toString()
{
    string rentalstr;
    if (rental ==true) {
        rentalstr = "Rental";
    }
    else if (rental==false){
        rentalstr = "NOT Rental";
    }
    
    
    
    stringstream st;
    st << "Property id: "<< id << " Address: " << address << " " << rentalstr << " Estimated value: " << price <<
    " Days Since Last Payment: " << days << " Discounted  Discount " <<   rate << " NOTE: Farm property";
    
    
    st << endl;
    
    return st.str();
}

double Farm::toTaxes()
{
    double taxTotal = 0;
    
    double discountRate = 1 - rate;
    
    if (rental == true) {
        taxRate = .012;
    }
    else if (rental ==false)
    {
        taxRate = .01;
    }
    
    taxRate = taxRate*discountRate;
    
    taxTotal = price*taxRate;
    
    return taxTotal;
}

int Farm::toDeadline()
{
    daysDue = 100;//due in 100 days, one season.
    
    
    return daysDue;
}