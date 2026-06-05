#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool check = true;
    // checking that if each element is equal for efficiency then check from prefix sum method
    for (int i = 1; i < n; i++)
    {
        if(a[i] != a[i-1]){
            check = false;
            break;
        }
    }
    long long pairs = n * (n - 1)/ 2;
    if(check && n > 2){
        cout << 0 << " " << pairs;
        return 0;
    }
    else if(check){
        cout << 0 << " " << 1;
        return 0;
    }

    sort(a , a + n);
    int left = 0, right = n - 1;
    int max = a[right] - a[left];
    long long leftcount = 1;
    long long rightcount = 1;
    long long count = 0;
    while(a[right] == a[right-1]){
        rightcount++;
        right--;
    }
    while(a[left] == a[left+1]){
        leftcount++;
        left++;
    }
    count = leftcount * rightcount;
    cout << max << " " << count;
    return 0;
    
}