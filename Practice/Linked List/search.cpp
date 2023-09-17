#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *n = new node(5);
    node *head = n;
    insertAtHead(head,10);
    insertAtHead(head,20);
    display(head);
    return 0;
}