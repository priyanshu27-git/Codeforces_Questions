// #include <iostream>
// #include <stdio.h>
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
//     // cout << 12 % 21;
//     int address;
//     int *a = new int[1];
//     // int *a = &address;
//     a[0] = 5;
//     // printf("%d", *a);
//     // cout << *a;
//     // cout << 0[a];
//     cout << a ;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int solu[t];
    int k =0 ;
    while (t--)
    {
        int x;
        cin >> x;
        solu[k++] = x + 1;
    }
    for (int i = 0; i < k; i++)
    {
        cout << solu[i] << endl;
    }
    
}
