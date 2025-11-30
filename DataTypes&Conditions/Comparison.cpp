#include <iostream>
using namespace std;
int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (A < B)
        cout << "Right";
    else if (A > B)
        cout << "Right";
    else if (A == B)
        cout << "Right";
    else
        cout << "Wrong";
    return 0;
}