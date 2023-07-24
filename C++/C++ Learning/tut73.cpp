#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["Kabir"] = 98;
    marksMap["Rahul"] = 64;
    marksMap["Ridoy"] = 78;
    marksMap["Rakib"] = 46;
    marksMap["Shariar"] = 89;
    marksMap.insert({{"Rohan", 89}, {"Akshat", 46}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    return 0;
}