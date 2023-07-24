#include <iostream>
using namespace std;
int main()
{
    int mark[] = {23, 43, 53, 65};
    // cout << mark[0] << endl;
    // cout << mark[1] << endl;
    // cout << mark[2] << endl;
    // cout << mark[3] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of " << i << " is " << mark[i] << endl;
    }
    int *p = mark;
    cout << "The value of *p is: " << *p << endl;
    cout << "The value of *(p+1) is: " << *(p + 1) << endl;
    cout << "The value of *(p+2) is: " << *(p + 2) << endl;
    cout << "The value of *(p+3) is: " << *(p + 3) << endl;

    return 0;
}