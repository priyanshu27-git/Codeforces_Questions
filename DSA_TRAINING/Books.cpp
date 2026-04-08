#include <iostream>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(t >= a[i]){
            t -= a[i];
            count++;
        }
    }
    
    cout << count;
    return 0;
}