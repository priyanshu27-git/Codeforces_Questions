#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a';
        if (index >= 0 && index < 26)
        {
            freq[index]++;
        }
    }

    int odd_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    if (odd_count == 0 || odd_count % 2 != 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

    return 0;
}