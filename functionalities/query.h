#include <bits/stdc++.h>
#include "person.h" 
using namespace std ;

class Query
{
    const int ON = 1;
    const int OFF = 0;

public:
    vector<int> attriblueStatus;
    Person target;
    bool partialMode = 0;

    Query(int noOfAttribute)
    {
        attriblueStatus = vector<int>(noOfAttribute + 1, 0);
    }

    void setQueryFrame()
    {
        cout << "Prefix Search Mode ON(1) : OFF(0) ";
        cin >> partialMode;

        cout << "Apply First Name ?  1 (YES) : 0 (NO)   ";
        cin >> attriblueStatus[1];

        if (attriblueStatus[1] == ON)
        {
            target.setFirstName();
        }

        cout << "Apply Last Name ?  1 (YES) : 0 (NO)  ";
        cin >> attriblueStatus[2];

        if (attriblueStatus[2] == ON)
        {
            target.setLastName();
        }

        cout << "Apply Phone Number ? 1(YES) : 0(NO)  ";
        cin >> attriblueStatus[3];
        
        if (attriblueStatus[3] == ON)
        {
            target.setPhoneNumber();
        }
    }
};