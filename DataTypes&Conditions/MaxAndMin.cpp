#include <iostream>
using namespace std;
int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    long long min = A;
    long long max = A;
    
    if(B < min)
    min = B;
    if(C < min)
    min = C;

    if(B > max)
    max = B;
    if(C > max)
    max = C;

    cout << min << " " << max;
    return 0;
}