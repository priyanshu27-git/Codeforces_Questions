#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int solu = 10000000, temp;

    for (int i = 0; i < (m - n) + 1; i++)
    {
        temp = a[(i + n) - 1] - a[i];
        if (temp < solu)
        {
            solu = temp;
        }
    }
    cout << solu;

    return 0;
}

