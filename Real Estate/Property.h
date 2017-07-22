//
//  Header.h
//  Real Estate
//
//  Created by Andre Carrera on 11/24/15.
//  Copyright © 2015 Andre Carrera. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <string>
#include <sstream>

using namespace std;

class Property {//the parent class. 
    
protected:
    int id;
    static int idGenerator;// static data member that changes when a new one is assigned. 
    bool rental;
    double price;
    int days;
    string address;
    double taxRate;
    double taxTotal;
    const double DEADLINETHRESH = 1000000;//threshhold set to 1 million. 
    int daysDue;
    
public:
    Property( bool rentalIn, double priceIn, int daysIn, string addressIn);//constructer
    //sets the value of the id
    //sets the value of rental
    //sets the the value of price
    //sets the value of the address
    virtual string toString() = 0;// pure virtual
    //inhereted by children, displays the details of the property
    virtual double toTaxes()=0; //pure virtual
    //calculates the value of the taxes
    virtual int toDeadline()= 0;
    const int getId(); //returns the id
    string getAddress(); // returns the address
    double getPrice();//returns the price
    int getDays();//returns the days
    
    ~Property();//deconstructer
};


#endif /* Header_h */
