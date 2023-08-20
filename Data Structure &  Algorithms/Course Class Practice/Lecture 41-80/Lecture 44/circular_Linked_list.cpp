#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        if (next->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void insertNode(Node*&tail,int element,int d){
    
}
int main()
{

    return 0;
}