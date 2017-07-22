//
//  Commercial.cpp
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#include "Commercial.h"

Commercial::Commercial( bool rentalIn, double priceIn, int daysIn, bool taxesIn, double rateIn, string addressIn)
:Property( rentalIn, priceIn, daysIn, addressIn)
{
    taxes = taxesIn;
    rate = rateIn;
}

string Commercial::toString()
{
    string rentalstr;
    string taxstr;
    if (rental ==true) {
        rentalstr = "Rental";
    }
    else if (rental==false){
        rentalstr = "NOT Rental";
    }
    
    if (taxes == true) {
        taxstr = "Discounted";
    }
    else if (taxes ==false){
        taxstr = "Not Discounted";
    }
    
    
    stringstream st;
    st << "Property id: "<< id << " Address: " << address << " " << rentalstr << " Estimated value: " << price <<
    " Days Since Last Payment: " << days << " " <<   taxstr;
    
    if (taxes == true) {//display rate only if there is a discount
        st << " Discount " << rate;
    }
    
    st << endl;

    return st.str();
}

double Commercial::toTaxes()
{
    
    
    double discountRate = 1 - rate;
    
    if (rental == true) {
        taxRate = .012;
    }
    else if (rental ==false)
    {
        taxRate = .01;
    }
    
    if (taxes == true) {
        taxRate = taxRate*discountRate;
    }
    
    taxTotal = price*taxRate;
    
    return taxTotal;
}

int Commercial::toDeadline()
{
    
    //the deadline is 90 for residential unless taxes
    if (taxTotal>DEADLINETHRESH ) {
        daysDue = 60;//due in 60 days if taxes are over 1 million
    }
    else if (taxTotal<DEADLINETHRESH){
        daysDue = 90;//due in 90 days if taxes are less than 1 million
    }
    
    return daysDue;
}