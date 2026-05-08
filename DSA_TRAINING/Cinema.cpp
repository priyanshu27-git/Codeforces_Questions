#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int weeks;
    int min_off;
    int max_off;
    if (n >= 7)
    {
        weeks = n / 7;
        min_off = weeks * 2;
        if (weeks * 7 == n)
        {
            max_off = min_off;
        }
        else if ((weeks * 7) + 2 <= n)
        {
            max_off = min_off + 2;
            if ((weeks * 7) + 6 == n)
            {
                min_off++;
            }
        }
        else
        {
            max_off = min_off + 1;
        }

        cout << min_off << " " << max_off;
    }

    else
    {
        if (n == 1)
        {
            min_off = 0;
            max_off = 1;
        }
        else if (n == 6)
        {
            min_off = 1;
            max_off = 2;
        }
        else
        {
            min_off = 0;
            max_off = 2;
        }
        
        cout << min_off << " " << max_off;

    }
    return 0;
}