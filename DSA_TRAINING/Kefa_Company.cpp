#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<pair<long,long>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;   
    }

    sort(v.begin() , v.end());

    long long curr = 0, max = 0;
    int left = 0, right = 0;
    while(right < n){
        if(v[right].first - v[left].first < d){
            curr += v[right].second;
            right++;
        }
        else{
            curr -= v[left].second;
            left++;
        }
        if(max < curr){
            max = curr;
        }
    }

    cout << max;    
    return 0;
}
