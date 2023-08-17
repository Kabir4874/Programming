#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Hero
{
public:
    char name[100];
    int health;
    char level;
    
};
int main()
{
    Hero h1;
    // cout << "Size : " << sizeof(h1) << endl;
    h1.health = 40;
    cout << h1.health << endl;
    return 0;
}