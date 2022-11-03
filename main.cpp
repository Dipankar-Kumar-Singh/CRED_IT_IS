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


    // bool partialMatched(Person person)
    // {
    //     for(int i = 0 ; i < person.getFirst)
    // }
};


class ContactBook{

    vector<Person> groupOfPerson ;


    bool matchedName(Person name)
    {
        
    }


    vector<Person> searchByNameExact(string name)
    {
        vector<Person> queryResult  ;
        for(Person& person : groupOfPerson)
        {
            if(person.matchedName(name))
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
