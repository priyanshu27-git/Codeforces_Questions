#include <iostream>
using namespace std;
int main() 
{
    char X;
    cin >> X;
    if(X <= '9'  && X >= '0')
    cout << "IS DIGIT";
    else if((int)X >= 65 && (int)X <= 93)
    cout << "ALPHA\nIS CAPITAL";
    else if((int)X >= 97 && (int)X <= 123)
    cout << "ALPHA\nIS SMALL";
    return 0;
}