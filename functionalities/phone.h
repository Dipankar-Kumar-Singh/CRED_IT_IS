#include <bits/stdc++.h>
using namespace std ;


class PhoneNumber{
    private : 
    string countryCode ;
    string baseNumber ;

    public : 

    PhoneNumber(string _countryCode, string _baseNumber)
    {
        countryCode = _countryCode ;
        baseNumber = _baseNumber ;
    }

    PhoneNumber() {} ;

    string getCountryCode()
    {
        return this->countryCode;
    }

    string getBaseNumber()
    {
        return this->baseNumber;
    }


    void setNumber(string _countryCode, string _baseNumber)
    {
        countryCode = _countryCode ;
        baseNumber = _baseNumber ;
    }

    void setNumber()
    {
        cout << "Country Code : ";
        cin >> countryCode;

        cout << "Number  : ";
        cin >> baseNumber;
    }
};