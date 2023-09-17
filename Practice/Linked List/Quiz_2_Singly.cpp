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
    ~node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
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
void search(node *&head, int d)
{
    node *temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->data == d)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
void update(node *&head, int d, int k)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == d)
        {
            temp->data = k;
        }
        temp = temp->next;
    }
}
void deleteNode(node *&head, node *&tail, int position)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if (prev->next == NULL)
        {
            tail = prev;
            tail->next = NULL;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *n = new node(5);
    node *head = n;
    node *tail = n;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    display(head);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    display(head);
    search(head, 40);
    update(head, 40, 100);
    display(head);
    deleteNode(head, tail, 2);
    display(head);
    return 0;
}