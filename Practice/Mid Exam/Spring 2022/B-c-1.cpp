#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Node
{
public:
    int d;
    Node *next;
    Node(int d)
    {
        this->d = d;
        this->next = NULL;
    }
};
void find(Node *head, int k)
{
    Node *temp = head;
    bool ans = false;
    while (temp != NULL)
    {
        if (temp->d == k)
        {
            ans = true;
            break;
        }
        temp = temp->next;
    }
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    Node *nodeToInsert = new Node(d);
    if (position == 1)
    {
        nodeToInsert->next = head;
        head = nodeToInsert;
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
        tail->next = nodeToInsert;
        tail = nodeToInsert;
        return;
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->d << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *n = new Node(8);
    Node *head = n;
    Node *tail = n;
    insertAtPosition(head, tail, 2, 3);
    insertAtPosition(head, tail, 1, 4);
    display(head);
    return 0;
}