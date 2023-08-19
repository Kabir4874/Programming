#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(4);
    // cout << node1->data << endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // insertAtHead(head, 12);
    // print(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    // print(head);
    insertAtPosition(head, tail, 3, 22);
    print(head);
    return 0;
}