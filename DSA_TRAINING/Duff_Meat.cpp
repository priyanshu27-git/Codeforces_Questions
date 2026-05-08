#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    int a = 0, p = 1;
    int minimum_money = 0;

    int k = 0;
    while (a < n)
    {
        minimum_money += arr[a][p] * arr[a][p - 1];
        k = a + 1;
        while (k < n && a < n - 1 && arr[a][p] <= arr[k][p])
        {
            minimum_money += arr[a][p] * arr[k][p - 1];
            k++;
        }
        a = k;
    }

    cout << minimum_money;
    
    return 0;
}