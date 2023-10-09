#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    float k;
    Node *b;
    Node *c;
    Node(float d)
    {
        this->k = d;
        this->b = NULL;
        this->c = NULL;
    }
};
void insertAtLast(Node *&tail, float d)
{
    Node *temp = new Node(d);
    tail->c = temp;
    tail->b = temp->b;
    tail = temp;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->k << " ";
        temp = temp->c;
    }
    cout << endl;
}
int main()
{
    Node *n = new Node(14.5);
    Node *head = n;
    Node *tail = n;
    insertAtLast(tail, 17.5);
    insertAtLast(tail, 10.5);
    display(head);
    return 0;
}