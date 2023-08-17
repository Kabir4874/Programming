#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void reachHome(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << endl; 
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }
    reachHome(++src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);
    return 0;
}