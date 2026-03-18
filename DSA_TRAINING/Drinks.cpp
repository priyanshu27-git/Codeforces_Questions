#include<iostream>
using namespace std;
 
int main() {
    int n; 
    double ans = 0;
 
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ans += temp;
    }
 
    ans /= n;
    cout << ans;
    
    return 0;
}