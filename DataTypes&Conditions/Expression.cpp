#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    if (S == '+')
    {
        if (C == A + B)
        {
            cout << "Yes";
        }
        else
            cout <<  A + B;
    }
    else if (S == '-')
    {
        if (C == A - B)
        {
            cout << "Yes";
        }
        else
           cout << A - B;
    }
    else if (S == '*')
    {
        if (C == A * B)
        {
            cout << "Yes";
        }
        else
            cout <<  A * B;
    }
}