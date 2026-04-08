#include <iostream>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0 , right = 0;
    int sum = 0;
    int k = t;
    for (int i = 0; k > 0 && left > n; i++)
    {
        if(right < n && k >= a[right]){
            sum += a[right];
            k -= a[right];
            right++;
        }
        else{
            right = left++;
            k = t;
        }
        if(k > 0 && right == n - 1){
            break;
        }
    }
    cout << sum;
    
    
    return 0;
}