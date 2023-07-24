#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.push_back(60);
    // v.insert(v.begin() + 2, 3, 1);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;
    // vector<int> v1, v2;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);
    // v2.push_back(1);
    // v2.push_back(2);
    // v2.push_back(3);
    // cout << "Before Swap:" << endl;
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // for (int j = 0; j < v2.size(); j++)
    // {
    //     cout << v2[j] << " ";
    // }
    // cout << endl;
    // swap(v1, v2);
    // cout << "After Swap:" << endl;
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;
    // for (int j = 0; j < v2.size(); j++)
    // {
    //     cout << v2[j] << " ";
    // }
    // cout << endl;
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    // cout << "Before Sorting:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // sort(v.begin(), v.end());
    // cout << "After Sorting:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // cout << "Before Reverse:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // reverse(v.begin(), v.end());
    // cout << "After Reverse:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}