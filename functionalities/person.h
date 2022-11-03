#include <bits/stdc++.h>
#include "phone.h"
using namespace std ;

class Person {
    
    private : 
    string firstName ; 
    string lastName ;
    PhoneNumber phoneNumber ;

    public :
    Person(string _firstName , string _lastName , PhoneNumber _phoneNumber ){
        firstName  = _firstName ;
        lastName = _lastName ;
        phoneNumber = _phoneNumber ;
    } 

    Person(){} ;

    public : 
    string getFirstName()
    {
        return this->firstName ;
    }  

    string getLastName()
    {
        return this->lastName ;
    }

    string getPhoneNumber()
    {
        return phoneNumber.getCountryCode() + phoneNumber.getBaseNumber() ;
    }

};