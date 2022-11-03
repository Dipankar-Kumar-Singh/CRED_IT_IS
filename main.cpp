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
};



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
        return firstName ;
    }  

};


class ContactBook{

    vector<Person> groupOfPerson ;
    // const int FOUND_FULL = 
    const int QUERY_FIRSTNAME = 1 ;
    const int QUERY_LASTTNAME = 2 ;
    const int QUERY_PHONE = 3 ;


    int match(Person targetPerson , int mode)
    {
        if(mode == QUERY_FIRSTNAME)
        {
            for(Person& person : groupOfPerson)
            {
                if(person.getFirstName() == targetPerson.getFirstName()) 
                {
                    return ;
                }

                string pesronAFirstName = 
            }  
        }

        else if( mode == QUERY_LASTTNAME)
        {

        }

        else if(mode == QUERY_PHONE)
        {

        }
    }

    vector<Person> searchByNameExact(string name)
    {
        vector<Person> queryResult  ;
        for(Person& person : groupOfPerson)
        {
            if(matchedName(name))
            {
                queryResult.push_back(person) ;
            }
        }  

        return queryResult ; 
    }


    vector<Person> searchByNamePartial(string name)
    {

    }

};

int main(int, char**) {
    std::cout << "Hello, world!\n";

    Person p ;
}
