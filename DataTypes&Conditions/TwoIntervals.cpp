#include <iostream>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long intersection_L;
    if (l1 > l2)
    {
        intersection_L = l1;
    }
    else
    {
        intersection_L = l2;
    }

    long long intersection_R;
    if (r1 < r2)
    {
        intersection_R = r1;
    }
    else
    {
        intersection_R = r2;
    }

    if (intersection_L <= intersection_R)
    {
        cout << intersection_L << " " << intersection_R;
    }
    else
    {
        cout << -1;
    }

    return 0;
}