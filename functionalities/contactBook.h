#include <bits/stdc++.h>
#include "search.h"
using namespace std ;

class ContactBook{

    public : 
    int noOfAttribute = 3;
    vector<Person> groupOfPerson ;
    
    public :
    int getNoOfAttribute()
    {
        return this->noOfAttribute;
    }
    void addToContactBook(const Person& person)
    {
        groupOfPerson.push_back(person) ;
    }

    void addToContactBook()
    {
        Person person ; 
        person.setPerson() ;
        groupOfPerson.push_back(person) ;
    }

    vector<Person> searchForQuery(Query query)
    {
        return search(groupOfPerson, query) ;
    }
};