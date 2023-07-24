#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream hout("sample.txt");
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    hout << name + " is my name";
    hout.close();
    ifstream hin("sample.txt");
    string content;
    hin >> content;
    cout << content;
    hin.close();
    return 0;
}