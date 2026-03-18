#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int sh = (s[0] - '0') * 10 + (s[1] - '0');
    int sm = (s[3] - '0') * 10 + (s[4] - '0');
    // cout << sh << sm << endl;
    int th = (t[0] - '0') * 10 + (t[1] - '0');
    int tm = (t[3] - '0') * 10 + (t[4] - '0');
    // cout << th << tm;
    int currminutes = sh * 60 + sm;
    int slminutes = th * 60 + tm;

    int result = currminutes - slminutes;

    if (result < 0)
    {
        result += 1440;
    }

    int resulth = result / 60;
    int resultm = result % 60;

    if (resulth < 10)
        cout << "0";
    cout << resulth << ":";

    if (resultm < 10)
        cout << "0";
    cout << resultm;

    return 0;
}