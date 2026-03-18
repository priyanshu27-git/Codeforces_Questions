#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];//a1,a2....
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];//q1,q2....
    }
    int prefixSum[n];
    prefixSum[0] = arr1[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
    auto it = lower_bound(prefixSum, prefixSum + n, arr2[i]);
    if(it != prefixSum+n) 
    cout << (it - prefixSum) + 1 << endl;
    }
    
    // int i=0,j=0;
    // bool check = false;
    // while(j < m){
    //     if(check) i = 0;
    //     check = false;
    //     if(arr2[j] <= prefixSum[i]){
    //         cout << i+1 << endl;
    //         j++;
    //         check = true;
    //     }
    //     i++;  
    // }
}