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

    void setFirstName(string name)
    {
        this->firstName = name ;
    }

    void setFirstName()
    {
        cout << " First Name : " ; 
        cin >> firstName ;
    }

    void setLastName(string name)
    {
        lastName = name ;
    }
    void setLastName()
    {
        cout << " Last Name : " ; 
        cin >> lastName ;
    }

    void setPhoneNumber(PhoneNumber _phone)
    {
        phoneNumber = _phone ;
    }
    void setPhoneNumber()
    {
        phoneNumber.setNumber() ;
    }

    void setPerson()
    {
        setFirstName() ;
        setLastName() ;
        setPhoneNumber() ;
    }

    void showDetails()
    {
        cout << "First Name : " << firstName << endl ;
        cout << "Second Name : " << lastName << endl ;
        cout << "Phone : " <<  phoneNumber.getCountryCode()  <<  " " << phoneNumber.getBaseNumber() << endl ;
    }
};