// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // int n = 8;
//     // if(n++ && n++)
//     // cout << n;
//     // while(n--) cout << 1;
//     // string str = "HoUse";
//     // for (int i = 0; i < 5; i++)
//     // {
//     //      str[i] = (int)str[i] - 32;
//     // }
//     // str[0] = (int)str[0] + 32;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << str[i] << ' ';
//     // }

//     // string str = "Hello World";
//     // // Erase 1 character starting at index 5 (the space)
//     // str.erase(0, 1);
//     // cout << str << endl; // Output: HelloWorld
//     cout << 12 % 21;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int solu[t];
//     int k = 0;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int sum;
//         sum = a + b + c;

//         if (sum % 3 == 0)
//         {
//             solu[k++] = sum / 3;
//         }
//         else
//         {
//             solu[k++] = (sum / 3) + sum % 3;
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout << solu[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// void solve()
// {
//     vector<long long> v(3);
//     for (int i = 0; i < 3; i++)
//         cin >> v[i];
//     sort(v.begin(), v.end());

//     if (v[2] <= v[0] + v[1])
//     {

//         cout << (v[0] + v[1] + v[2]) % 2 << endl;
//     }
//     else
//     {
//         cout << v[2] - (v[0] + v[1]) << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int sum = a + b + c;
//         int mx = max({a, b, c});

//         int result = min(sum / 2, sum - mx);

//         cout << result << "\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "You Should Drive";
    }
    else if (n == 2)
    {
        cout << "NO";
    }
    else if (n == 3)
    {
        cout << "NO";
    }
    else if (n == 4)
    {
        cout << "NO";
    }
    else if (n == 5)
    {
        cout << "NO";
    }
    else if (n == 6)
    {
        cout << "NO";
    }
    else if (n == 7)
    {
        cout << "NO";
    }
    else
        cout << "1 2 3 4 5 6 7 8 9 10";
    return 0;
}