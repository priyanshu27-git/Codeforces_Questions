#include <iostream>
#include <algorithm>
#include <vector>
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

    sort(sorted_Array.begin(), sorted_Array.end());

    vector<long long> pref(n + 1, 0), prefSorted(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i - 1];
        prefSorted[i] = prefSorted[i - 1] + sorted_Array[i - 1];
    }

    int m;
    cin >> m;
    vector<long long> solu(m);
    long k = 0;

    while (m--)
    {
        int type;
        int l, r;
        cin >> type >> l >> r;
        long long ans = 0;

        if (type == 1)
        {
            ans = pref[r] - pref[l - 1];
        }
        else
        {
            ans = prefSorted[r] - prefSorted[l - 1];
        }
        solu[k++] = ans;
    }
    for (long i = 0; i < k; i++)
    {
        cout << solu[i] << endl;
    }

    return 0;
}