#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long c, k;
        cin >> n >> c >> k;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long needed = 0;

        if (c == 0)
            cout << c << endl;
        else if(n == 1 && c > 0 && a[0] == 0)
            cout << c+k << endl;
        else if(n == 1 && c > 0)
        {
            needed = c % a[0];
            a[0] += needed;
            if (a[0] <= c)
            {
                c += a[0];
                cout << c << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        // solution
        if(c > 0 && n > 1){
        sort(a, a + n);
        for (long i = 0; i < n; i++)
        {
            if ((c % a[i]) < c && i == n - 1)
            {
                c += k + a[i];
            }
            else if ((c % a[i]) < c)
            {
                c += a[i];
            }
            else if ((c % a[i]) >= c && i == 0)
            {
                break;
            }
            else
            {
                c += k;
                break;
            }
        }
            cout << c << endl;
    }
    }
    return 0;
}