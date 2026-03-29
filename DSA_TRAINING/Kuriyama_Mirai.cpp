#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

// long long type_one(long a[], long start, long end)
// {
//     long long ans = 0;
//     for (long i = start; i <= end; i++)
//     {
//         ans += a[i];
//     }
//     return ans;
// }

// long long type_two(long a[], long start, long end)
// {
//     long long ans = 0;
//     for (long i = start; i <= end; i++)
//     {
//         ans += a[i];
//     }
//     return ans;
// }
int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long> sorted_Array(n);
    for (long i = 0; i < n; i++)
    {
        sorted_Array[i] = a[i];
    }

    sort(sorted_Array.begin() , sorted_Array.end());

    int m;
    cin >> m;
    vector<long long> solu(m);
    long k = 0;

    for (long i = 0; i < m; i++)
    {
        int type;
        long l, r;
        cin >> type >> l >> r;
        long long ans = 0;
        if (type == 1)
        {
            // ans = type_one(a, l - 1, r - 1);
            ans  = accumulate(a.begin() + (l-1) , a.begin() + (r-1) + 1 , 0LL);
        }
        else
        {
            // ans = type_two(sorted_Array, l - 1, r - 1);
            ans  = accumulate(sorted_Array.begin() + (l-1) , sorted_Array.begin() + (r-1) + 1 , 0LL);

        }
        solu[k++] = ans;
    }
    for (long i = 0; i < k; i++)
    {
        cout << solu[i] << endl;
    }

    return 0;
}