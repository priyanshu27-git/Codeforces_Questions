#include <iostream>
using namespace std;
int main() 
{
    long long A,B,C;
    cin >> A >> B >> C;
    long long min = A;
    long long max = A;
    if(A < B && A < C){
    min = A;
    max = C;
    }
    else if (B < A && B < C){
    min = B;
    max = C;
    }
    else if (C < A && C < B){
        min = C;
        max = B;
    }
    else
    max = A;

    cout << min << " " << max;
    return 0;
}