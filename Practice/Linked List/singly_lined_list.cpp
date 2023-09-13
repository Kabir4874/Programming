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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
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
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
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
void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
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
    int k;
    cout << "Enter the size of Linked List: ";
    cin >> k;
    cout << "Enter the values of Linked List: ";
    int x;
    cin >> x;
    Node *n = new Node(x);
    Node *head = n;
    Node *tail = n;
    for (int i = 0; i < k - 1; i++)
    {
        cin >> x;
        insertAtTail(tail, x);
    }
    print(head);
    cout << "Enter the value you want to insert: ";
    int a, b;
    cin >> a;
    cout << "Enter the position: ";
    cin >> b;
    insertAtPosition(head, tail, b, a);
    print(head);
    return 0;
}