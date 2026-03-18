#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    sort(arr1, arr1 + n);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        int left = 0;
        int right = n - 1;
        int mid;

        while (left <= right)
        {
            mid = (left + right) / 2;

            if (arr1[mid] <= arr2[i])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << left << endl;
    }
}
