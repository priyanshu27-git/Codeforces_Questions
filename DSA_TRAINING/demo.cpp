#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    vector<int> a(n);
    long long sum_gt_1 = 0;
    int last_gt_1_idx = -1;
    bool has_ones = false;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > 1)
        {
            sum_gt_1 += a[i];
            last_gt_1_idx = i;
        }
        else
        {
            has_ones = true;
        }
    }

    if (last_gt_1_idx == -1)
    {
        cout << (has_ones ? 1 : 0) << "\n";
        return;
    }

    bool has_trailing_ones = false;
    for (int i = last_gt_1_idx + 1; i < n; ++i)
    {
        if (a[i] == 1)
        {
            has_trailing_ones = true;
            break;
        }
    }

    long long result = sum_gt_1 + (has_trailing_ones ? 1 : 0);

    cout << result % 10000 << "\n";
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