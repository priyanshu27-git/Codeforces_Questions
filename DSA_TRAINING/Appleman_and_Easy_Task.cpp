#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = 0;
            if (j + 1 != n && a[i][j + 1] == 'o')
            {
                count++;
            }
            if (i + 1 != n && a[i + 1][j] == 'o')
            {
                count++;
            }
            if (j > 0 && a[i][j - 1] == 'o')
            {
                count++;
            }
            if (i > 0 && a[i - 1][j] == 'o')
            {
                count++;
            }

            if (count > 0 && count % 2 != 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}