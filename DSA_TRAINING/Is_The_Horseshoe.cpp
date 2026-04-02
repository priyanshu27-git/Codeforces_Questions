#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
     bool isvisited[4];
    for (int i = 0; i < 4; i++)
    {
        isvisited[i] = false;
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j] && !isvisited[j])
            {
                isvisited[j] = true;
                count++;
            }
        }
        if (count == 3)
        {
            break;
        }
    }
    cout << count;
}