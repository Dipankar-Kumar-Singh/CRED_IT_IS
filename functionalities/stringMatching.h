#include<bits/stdc++.h>
using namespace std; 

string toSmaller(string &word)
{
    string smallerWord ;
    for(auto &c : word)
    {
        if (isalpha(c))
            smallerWord.push_back(tolower(c));
        else
            smallerWord.push_back((c));
    }
    return smallerWord ;
}

pair<bool, bool> compare(string target, string source)
{
    int prefixMatchSize = 0;

    target = toSmaller(target) ;
    source = toSmaller(source) ;

    for (int i = 0; i < min(target.size(), source.size()); i++)
    {
        if (target[i] == source[i])
            prefixMatchSize++;
        else
            break;
    }

    pair<bool, bool> result;
    // First --> Partial Match  ---- Second --> Same String [ FUll match ]
    result.first = (prefixMatchSize == target.size());
    result.second = (prefixMatchSize == source.size()) and (source.size() == target.size());
    return result;
}