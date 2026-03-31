#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> pair;

    for (int i = 0; i < n; i++)
    {
        int key;
        int value;

        cin >> key >> value;

        pair.push_back({key, value});
    }

    sort(pair.begin(), pair.end());

    for (int i = 0; i < n; i++)
    {
        if (s > pair[i].first)
        {
            s += pair[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}