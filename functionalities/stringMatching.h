#include<bits/stdc++.h>
using namespace std; 

pair<bool, bool> compare(string target, string source)
{
    int prefixMatchSize = 0;
    for (int i = 0; i < min(target.size(), source.size()); i++)
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
    result.second = (prefixMatchSize == source.size()) and (source.size() == target.size());
    return result;
}