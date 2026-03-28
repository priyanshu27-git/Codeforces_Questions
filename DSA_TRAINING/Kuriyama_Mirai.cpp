#include <iostream>
#include <algorithm>
using namespace std;

long long type_one(long a[], long start, long end)
{
    long long ans = 0;
    for (long i = start; i <= end; i++)
    {
        ans += a[i];
    }
    return ans;
}

long long type_two(long a[], long start, long end)
{
    long long ans = 0;
    for (long i = start; i <= end; i++)
    {
        ans += a[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    long a[n];
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long sorted_Array[n];
    for (long i = 0; i < n; i++)
    {
        sorted_Array[i] = a[i];
    }

    sort(sorted_Array, sorted_Array + n);

    int m;
    cin >> m;
    long long solu[m];
    long k = 0;

    for (long i = 0; i < m; i++)
    {
        int type;
        long l, r;
        cin >> type >> l >> r;
        long long ans = 0;
        if (type == 1)
        {
            ans = type_one(a, l - 1, r - 1);
        }
        else
        {
            ans = type_two(sorted_Array, l - 1, r - 1);
        }
        solu[k++] = ans;
    }
    for (long i = 0; i < k; i++)
    {
        cout << solu[i] << endl;
    }

    return 0;
}