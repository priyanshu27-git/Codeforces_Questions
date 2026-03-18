#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long long x;
    cin >> x;
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        if(x % i == 0 && x / i <= n){
            count++;
        }
    }
    cout << count;

    // long long arr[n][n];
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         arr[i - 1][j - 1] = i * j;
    //     }
    // }
    // long long count = 0;
    // int rows = n;
    // int column = n;
    // int r = 0;
    // int c = column - 1;
    // while (r < rows && c >= 0)
    // {
    //     if (arr[r][c] == x)
    //     {
    //         count++;
    //         r++;
    //     }
    //     else if (arr[r][c] > x)
    //     {
    //         c--;
    //     }
    //     else
    //     {
    //         r++;
    //     }
    //     cout << " * ";
    // }
    // cout << count;
}