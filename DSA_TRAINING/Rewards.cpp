#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    int b1, b2, b3;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;

    int totalcup = a1 + a2 + a3;
    int totalmedals = b1 + b2 + b3;

    int cupshelves = 0;
    int medalshelves = 0;
    while (totalcup > 0)
    {
        totalcup -= 5;
        cupshelves++;
    }

    while (totalmedals > 0)
    {
        totalmedals -= 10;
        medalshelves++;
    }
    if (cupshelves + medalshelves <= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}