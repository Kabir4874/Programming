#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int m;
    Node *n;
    Node(int m)
    {
        this->m = m;
        this->n = NULL;
    }
};
void insert(Node *head, int k, int d)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->m == k)
        {
            break;
        }
        temp = temp->n;
    }
    Node *newNode = new Node(k);
    newNode->m = d;
    newNode->n = temp->n;
    temp->n = newNode;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->m << " ";
        temp = temp->n;
    }
    cout << endl;
}
int main()
{
    Node *n = new Node(12);
    Node *head = n;
    insert(head, 12, 22);
    insert(head, 22, 25);
    display(head);
    return 0;
}