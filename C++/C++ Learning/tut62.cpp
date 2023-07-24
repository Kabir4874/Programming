#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "My name is Kabir.\n";
    out << "I'm from Dhaka,Bangladesh.\n";
    out << "I'm studying in Daffodil International University.\n";
    out.close();
    ifstream in;
    string st;
    in.open("sample.txt");
    //    in>>st;
    //    cout<<st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}