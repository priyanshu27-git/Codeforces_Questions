#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    bool isvisited[n];
    for (int i = 0; i < n; i++)
    {
        isvisited[i] = false;
    }
    string winner;
    int max_goals = 0, current_goals = 0;
    for (int i = 0; i < n; i++)
    {
        current_goals = 0;
        for (int j = 0; j < n ; j++)
        {
            if (str[i] == str[j] && isvisited[j] == false)
            {
                current_goals++;
                isvisited[j] == true;
            }
        }
        if (max_goals < current_goals)
        {
            max_goals = current_goals;
            winner = str[i];
        }
    }
     cout << winner;
    return 0;
}