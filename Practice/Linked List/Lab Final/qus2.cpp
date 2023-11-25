#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node
{
public:
    int roll;
    string name;
    double gpa;
    node *next;
    node(int roll, string name, double gpa)
    {
        this->roll = roll;
        this->name = name;
        this->gpa = gpa;
        this->next = NULL;
    }
};
void add(node *&head, int roll, string name, double gpa)
{
    node *temp = new node(roll, name, gpa);
    temp->next = head;
    head = temp;
}
void display(node *head)
{
    node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->roll << "    " << temp->name << "    " << temp->gpa << endl;
        temp = temp->next;
    }
    cout << endl;
}
void update(node *head, int roll, double k)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->roll == roll)
        {
            temp->gpa = k;
            return;
        }
        temp = temp->next;
    }
    cout << endl
         << "Roll Not Found" << endl;
}
int main()
{
    node *p = new node(2, "Kabir", 3.90);
    node *head = p;
    while (1)
    {
        cout << endl;
        cout << "Choose Your Operation: " << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display" << endl;
        cout << "3. Search & Update" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        int k;
        cin >> k;
        if (k == 4)
        {
            break;
        }
        int roll;
        string name;
        double gpa;
        switch (k)
        {
        case 1:
            cout << "Enter RollNumber: ";
            cin >> roll;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter GPA: ";
            cin >> gpa;
            add(head, roll, name, gpa);
            break;
        case 2:
            display(head);
            break;
        case 3:
            cout << "Enter RollNumber: ";
            cin >> roll;
            cout << "Enter GPA: ";
            cin >> gpa;
            update(head, roll, gpa);
        }
    }
    return 0;
}