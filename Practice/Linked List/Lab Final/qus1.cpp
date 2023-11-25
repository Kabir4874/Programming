#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node
{
public:
    string song;
    string artist;
    double duration;
    node *next;
    node(string song, string artist, double duration)
    {
        this->song = song;
        this->artist = artist;
        this->duration = duration;
        this->next = NULL;
    }
};
void add(node *&head, string title, string artist, double duration)
{
    node *temp = new node(title, artist, duration);
    temp->next = head;
    head = temp;
}
void remove(node *&head, string s)
{
    node *temp = head;
    node *prev = NULL;
    if (temp != NULL && temp->song == s)
    {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->song != s)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Song not found in the playlist." << endl
             << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->song << " " << temp->artist << " " << temp->duration << endl;
        temp = temp->next;
    }
    cout << endl;
}
void duration(node *head)
{
    node *temp = head;
    double sum = 0.0;
    while (temp != NULL)
    {
        sum += temp->duration;
        temp = temp->next;
    }
    cout << "Total Duration is: " << sum << endl
         << endl;
}
int main()
{
    node *p = new node("ABC", "DEF", 4.5);
    node *head = p;
    while (1)
    {
        cout << endl;
        cout << "Choose Your Operation: " << endl;
        cout << "1. Add New Song" << endl;
        cout << "2. Remove a Song" << endl;
        cout << "3. Display Current Playlist" << endl;
        cout << "4. Duration Of Total Playlist" << endl;
        cout << "5. Exit Program" << endl
             << endl;
        int k;
        string s, artist;
        double d;
        cin >> k;
        if (k == 5)
        {
            break;
        }
        switch (k)
        {
        case 1:
            cin.ignore();
            cout << "Enter Song Title: ";
            cin >> s;
            cout << "Enter Artist Name: ";
            cin >> artist;
            cout << "Enter Duration: ";
            cin >> d;
            add(head, s, artist, d);
            break;
        case 2:
            cout << "Enter The Song Title You Want to Remove: ";
            cin >> s;
            remove(head, s);
            break;
        case 3:
            display(head);
            break;
        case 4:
            duration(head);
            break;
        }
    }
    return 0;
}