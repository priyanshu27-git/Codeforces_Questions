#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;


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
            ans  = accumulate(a.begin() + (l-1) , a.begin() + (r-1) + 1 , 0LL);
        }
        else
        {
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