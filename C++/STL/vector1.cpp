#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    // cout << v.at(0) << endl;
    // cout << v.at(1) << endl;
    // cout << v.at(2) << endl;
    // cout << "Size of Vector: " << v.size() << endl;
    // cout << "First Value of the vector: " << v.front() << endl;
    // cout << "Last Value of the vector: " << v.back() << endl;
    // cout << "Before Clear: " << v.size() << endl;
    // v.clear();
    // cout << "After Clear: " << v.size() << endl;
    // if (v.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not empty" << endl;
    // }
    // cout << "Before POP_Back:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << endl;
    // }
    // v.pop_back();
    // cout << "After POP_Back:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << endl;
    // }
    v.erase(v.begin() + 4, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
    return 0;
}