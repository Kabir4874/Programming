#include <bits/stdc++.h>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;
};
class cwhVideo : public CWH
{
    float videoLength;

public:
    cwhVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class cwhText : public CWH
{
    int words;

public:
    cwhText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django Tutorial";
    vlen = 4.53;
    rating = 4.89;
    cwhVideo djVideo(title, vlen, rating);
    djVideo.display();
    title = "Django Tutorial Text";
    words = 443;
    rating = 4.5;
    cwhText djText(title, rating, words);
    djText.display();
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}