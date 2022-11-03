#include <bits/stdc++.h>
#include "query.h"
#include "stringMatching.h"
using namespace std;
vector<Person> search(vector<Person> groupOfPerson, Query queryFrame)
{
    bool partialSearchApplicable = queryFrame.partialMode;
    vector<int> &attriblueStatus = queryFrame.attriblueStatus;
    Person targetPerson = queryFrame.target;

    vector<Person> quilifiedPersons;

    const int ON = 1;
    const int OFF = 0;

    for (Person person : groupOfPerson)
    {
        pair<int, int> quilifiedPerson = {1, 1};

        if (attriblueStatus[1] == ON)
        {
            // First Name
            pair<bool, bool> resultFirstName = compare(targetPerson.getFirstName(), person.getFirstName());
            quilifiedPerson.first &= resultFirstName.first;
            quilifiedPerson.second &= resultFirstName.second;
        }

        if (attriblueStatus[2] == ON)
        {
            // Last Name
            pair<bool, bool> resultLastName = compare(targetPerson.getLastName(), person.getLastName());
            quilifiedPerson.first &= resultLastName.first;
            quilifiedPerson.second &= resultLastName.second;
        }

        if (attriblueStatus[3] == ON)
        {
            // Phone Numeber
            pair<bool, bool> resultPhone = compare(targetPerson.getPhoneNumber(), person.getPhoneNumber());
            quilifiedPerson.first &= resultPhone.first;
            quilifiedPerson.second &= resultPhone.second;
        }

        if (quilifiedPerson.second == ON)
        {
            // Full Match
            quilifiedPersons.push_back(person);
            continue;
        }

        else if (partialSearchApplicable and quilifiedPerson.first == ON)
        {
            // Partail Match
            quilifiedPersons.push_back(person);
        }
    }

    return quilifiedPersons;
};