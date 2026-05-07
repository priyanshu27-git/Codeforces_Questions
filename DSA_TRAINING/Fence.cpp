#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int currentsum = 0, minimumsum = 0;
    int index = 1;
    for (int i = 0; i < n; i++)
    {
        if (count < k)
        {
            currentsum += a[i];
            count++;
            minimumsum = currentsum;
        }
        else
        {
            currentsum += a[i];
            currentsum -= a[i - k];
            if (currentsum < minimumsum)
            {
                minimumsum = currentsum;
                index = i - k + 2;
            }
        }
    }
    cout << index;
    return 0;
}