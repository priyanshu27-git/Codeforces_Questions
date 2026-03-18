#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n == 1) cout << 1;
    int min = arr[0];
    int ans = 0;
    for (int i = 0; i < n && n > 1; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            ans = i + 1; // index
        }
    }
    int j = 0, count = 0;
    while (j < n && n > 1)
    {
        if (min == arr[j++])
            count++;
    }
    if (count == 1)
        cout << ans;
    else if(count > 1)
        cout << "Still Rozdil";
}