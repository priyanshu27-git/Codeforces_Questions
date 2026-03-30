#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s.length() == 1){
     cout << s; return 0;
    }

    for (int i = 0; i < s.length() - 2; i += 2)
    {
        for (int j = 0; j < s.length() - 2 - i; j += 2)
        {

            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }

    cout << s;

    return 0;
}