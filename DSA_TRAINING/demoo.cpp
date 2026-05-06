#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    long long good_subarrays = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(p[i] - p[i + 1]);

        if (diff > 0 && p[i] % diff == 0)
        {
            good_subarrays++;
        }
    }

    cout << good_subarrays % 10000 << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}