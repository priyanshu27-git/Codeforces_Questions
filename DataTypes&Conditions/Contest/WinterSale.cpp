#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float X,P;
    cin >> X >> P;
    
    float dis = X / 100;

    float ans;
    ans = (P / (1 - dis));

    ans *= 100;
    ans = round(ans) / 100;

    cout << ans;

    return 0;
}