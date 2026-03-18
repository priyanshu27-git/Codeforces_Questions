#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int normal_ticket = a * n;
    int second_ticket = ((n + m - 1) / m) * b;
    int third_ticket = (n / m) * b + (n % m) * a;
    if (normal_ticket < second_ticket && normal_ticket < third_ticket)
    {
        cout << normal_ticket;
    }
    else if (second_ticket < normal_ticket && second_ticket < third_ticket)
    {
        cout << second_ticket;
    }
    else
        cout << third_ticket;

    return 0;
}