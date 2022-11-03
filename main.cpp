#include <bits/stdc++.h>
#include "functionalities/contactBook.h"

using namespace std ;

int main( ) 
{
    ContactBook contactBook ; 

    contactBook.addToContactBook() ; cout << endl ;
    contactBook.addToContactBook() ; cout << endl ;
    contactBook.addToContactBook() ; cout << endl ;

    while (1)
    {
        cout << "Give query" << endl;
        Query query(contactBook.getNoOfAttribute()) ;
        query.setQueryFrame() ;
        vector<Person> quilifiedPersons = contactBook.searchForQuery(query);
        for(Person person : quilifiedPersons )
        {
            person.showDetails() ;
            cout << endl ;
        }

        break;
    }




    
}
