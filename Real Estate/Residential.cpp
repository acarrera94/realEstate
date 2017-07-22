//
//  Residential.cpp
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#include "Residential.h"
#include "Property.h"


using namespace std;

Residential :: Residential( bool rentalIn, double priceIn, int daysIn, bool occupiedIn, string addressIn)
:Property(  rentalIn,  priceIn, daysIn, addressIn)
{
    occupied = occupiedIn;

}

string Residential::toString()
{
    string rentalstr;
    if (rental ==true) {
        rentalstr = "Rental";
    }
    else if (rental==false){
        rentalstr = "NOT Rental";
    }
    
    string occupiedstr; 
    if (occupied == true) {
        occupiedstr = "occuppied";
    }
    else if (occupied == false){
        occupiedstr = "NOT occupied";
    }
    
    stringstream st;
    st << "Property id: "<< id << " Address: " << address << " " << rentalstr << " Estimated value: " << price << " Days Since Last Payment: " << days << " " <<  occupiedstr << endl;
    return st.str();
}

double Residential::toTaxes()
{

    
    if (occupied == true)//if it is occupied
    {
        priceRate = 0.006;//this is the rate
    }
    else
    {
        priceRate = 0.009;
    }


    taxTotal = price *priceRate;
    
    
    return taxTotal;
}
int Residential::toDeadline()
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
