//
//  File.cpp
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//
#include "Property.h"
#include <sstream>
using namespace std;

Property::Property( bool rentalIn, double priceIn, int daysIn, string addressIn)//constructs the parent class
{
    id = idGenerator++;//id gets the next value of the static data member
    rental = rentalIn;
    price = priceIn;
    address = addressIn;
    days = daysIn;
    taxTotal = 0;//initialize to 0

    
}

int const Property::getId()//returns the id
{
    return id;
}

string Property::getAddress()//returns the address
{
    return address;
}
double Property::getPrice()// returns the price
{
    return price;
}
int Property::getDays()
{
    return days;
}


int Property::idGenerator = 0;//initializes the value of the static data member