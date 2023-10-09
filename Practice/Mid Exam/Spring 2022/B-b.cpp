#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int n;
    string o;
    Node *p;
    Node(int n, string o)
    {
        this->n = n;
        this->o = o;
        this->p = NULL;
    }
};
int main()
{
    Node *a = new Node(18, "head");
    Node *b = new Node(13, "tail");
    a->p = b;
    return 0;
}