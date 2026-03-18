#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;
    for (int i = 0; k > 0; i++)
    {
        arr[mid]++;
        k--;
        int x = mid;
        while (x + 1 != n && arr[x] > arr[x + 1])
        {
            swap(arr[x], arr[x + 1]);
            x++;
        }
    }
    cout << arr[mid];
}