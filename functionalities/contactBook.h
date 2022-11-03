#include <bits/stdc++.h>
#include "person.h"
using namespace std ;

class ContactBook{

    vector<Person> groupOfPerson ;
    const int QUERY_FIRSTNAME = 1 ;
    const int QUERY_LASTTNAME = 2 ;
    const int QUERY_PHONE = 3 ;

    pair<bool, bool> matchType(string target , string source)
    {
        int prefixMatchSize = 0;
        for (int i = 0; i <= min(target.size(), source.size()); i++)
        {
            if (target[i] == source[i])
            {
                prefixMatchSize++;
            }
            else
            {
                break;
            }
        }

        pair<bool, bool> result;
        result.first = (prefixMatchSize == target.size());
        result.second = (prefixMatchSize == source.size());
        return result;
    }

    vector<Person> match(Person targetPerson , int mode , bool partial)
    {
        vector<Person> queryResult ;
        
        for(Person& person : groupOfPerson)
        {

            if(mode == QUERY_FIRSTNAME) 
            {
                pair<bool,bool> result = matchType(targetPerson.getFirstName(),person.getFirstName()) ;
                
                if(result.second == true)
                {
                    queryResult.push_back(person) ;
                }
                
                else if(partial and result.first)
                {
                    queryResult.push_back(person) ;
                }

            }
            else if( mode == QUERY_LASTTNAME)
            {
                pair<bool,bool> result = matchType(targetPerson.getFirstName(),person.getFirstName()) ;
                
                if(result.second == true)
                {
                    queryResult.push_back(person) ;
                }
                
                else if(partial and result.first)
                {
                    queryResult.push_back(person) ;
                }
            }
            else if(mode == QUERY_PHONE)
            {
                pair<bool,bool> result = matchType(targetPerson.getPhoneNumber(),person.getPhoneNumber()) ;
                
                if(result.second == true)
                {
                    queryResult.push_back(person) ;
                }
                
                else if(partial and result.first)
                {
                    queryResult.push_back(person) ;
                }
            }
        } 

        return queryResult ; 
    }
};