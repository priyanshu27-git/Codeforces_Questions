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
    int left = 0, right = 0;
    int k = t;
    int current = 0, max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(t >= a[i]){
    //         t -= a[i];
    //         count++;
    //     }
    //     else {
    //         current = count;
    //         i -= 2;
    //     }
    // }
    while(right < n){
        if(k >= a[right]){
            count++;
            k -= a[right];
            right++;
        }
        else {
            right = left++;
            count = 0;
            k = t;
        }
        current = count;
        if(max < current){
            max = current;
        }
        if(count == n){
            break;
        }
    }
    cout << max;

    return 0;
}