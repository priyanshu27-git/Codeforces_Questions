#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    int count = 2;
    long long score = 0;
    if(n == 1){
        cout << a[0];
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        score += a[i] * count;
        if(count < n)
        count++;
    }

    cout << score;
    return 0;
}