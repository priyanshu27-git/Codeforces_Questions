#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool front = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0 && i % 2 != 0 && !front)
            {
                if (j == m - 1)
                {
                    cout << "#";
                    front = true;
                }
                else
                    cout << ".";
            }
            else if (i > 0 && i % 2 != 0 && front)
            {
                if (j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                    if (j == m - 1){
                        front = false;
                    }
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}